const St = imports.gi.St;
const Gio = imports.gi.Gio;const ExtensionUtils = imports.misc.extensionUtils;
const Me = ExtensionUtils.getCurrentExtension();
const Main = imports.ui.main;
const Mainloop = imports.mainloop;
const PanelMenu = imports.ui.panelMenu;let debounceTimeout = null;class Extension {
    constructor() {
        this._indicator = null;
    }    enable() {
        log(`enabling ${Me.metadata.name}`);        let indicatorName = `${Me.metadata.name} Indicator`;        // Create a panel button
        let icon = new St.Icon({
            gicon: new Gio.ThemedIcon({name: 'system-lock-screen-symbolic'}),
            style_class: 'system-status-icon',
        });        this._indicator = new St.Bin({
            child: icon,
            reactive: true,
            can_focus: true,
            track_hover: true,
            style_class: 'panel-button',  // reuse GNOME top bar styling
            x_expand: false,
            y_expand: false,
        });
        this._indicator.connect('button-press-event', _lock);        // Add with lower priority (smaller number = more to the left)
        Main.panel._rightBox.insert_child_at_index(this._indicator, 3);
    }    // REMINDER: It's required for extensions to clean up after themselves when
    // they are disabled. This is required for approval during review!
    disable() {
        log(`disabling ${Me.metadata.name}`);        if (this._indicator) {
            Main.panel._rightBox.remove_child(this._indicator);
            this._indicator.destroy();
            this._indicator = null;
        }
    }
}function _lock() {
    if (debounceTimeout === null) {
      debounceTimeout = Mainloop.timeout_add(420, function() {
        debounceTimeout = null;
/*	let proc = Gio.Subprocess.new(['xscreensaver-command', '-lock'], 0); */
	let proc = Gio.Subprocess.new(['/usr/share/42/ft_lock'], 0);
	proc.wait_async(null, null);
        return false;
      });
    }}function init() {
    log(`initializing ${Me.metadata.name}`);    return new Extension();
}
