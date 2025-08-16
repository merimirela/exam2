
if [ -d "$HOME/.local/share/gnome-shell/" ]; then
	if [ ! -d "$HOME/.local/share/gnome-shell/extensions" ]; then
		mkdir "$HOME/.local/share/gnome-shell/extensions"
	fi
	if [ ! -d "$HOME/.local/share/gnome-shell/extensions/lockscreen@43network.org" ]; then
		mkdir "$HOME/.local/share/gnome-shell/extensions/lockscreen@43network.org"
	else
		if gnome-extensions list | grep -q "lockscreen@43network.org"; then
			echo "Extension recognized, enabling..."
			gnome-extensions enable "lockscreen@43network.org"
			exit 1
		else
		echo "Error!"
		echo "This directory $HOME/.local/share/gnome-shell/extensions/lockscreen@43network.org"
		echo "already exists."
		echo "If you want you can delete this and rerun this script, if youre feeling adventurous"
		echo "But if you want to play safe, please contact afogonca for help :3"
		gnome-extensions enable "lockscreen@43network.org"
		exit 1
		fi
	fi
	cp extension.js $HOME/.local/share/gnome-shell/extensions/lockscreen@43network.org
	cp metadata.json $HOME/.local/share/gnome-shell/extensions/lockscreen@43network.org
	if gnome-extensions list | grep -q "lockscreen@43network.org"; then
	  echo "Extension recognized, enabling..."
	  gnome-extensions enable "lockscreen@43network.org"
	else
		echo -ne "\033[31m"
		echo "Extension not yet recognized by GNOME Shell."
		echo "Please do Alt + F2, its gonna pop a menu, then write r and press enter"
		echo "Your GUI might freak out a bit, thats ok, its GNOME Shell restarting!"
		echo "If after restarting the button still doesn't appear"
		echo -n "run this bash -c" 
		echo '$(curl -fsSL https://raw.githubusercontent.com/AfonsoMota-132/ft_lockbutton/main/run.sh)'
		echo "cmd again"
		echo "If you prefer or if anything goes wrong"
		echo "you can contact afogonca for more help"
		echo -ne "\033[0m"
		exit 1
	fi
	gnome-extensions enable "lockscreen@43network.org"
	echo "Instalation seemed successfull!"
	echo "If anything went wrong, contact afogonca for more help :3"
else
    echo "Error!"
	echo "Directory Does Not Exist! Please Contact afogonca for help :3!"
	exit 1
fi
