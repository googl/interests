#!/bin/sh
#
# ~/.xinitrc
#
# Executed by startx (run your window manager from here)

#/usr/bin/systemd --user &

if [ -d /etc/X11/xinit/xinitrc.d ]; then
  for f in /etc/X11/xinit/xinitrc.d/*; do
    [ -x "$f" ] && . "$f"
  done
  unset f
fi

keychain ~/.ssh/id_ecdsa
[ -f ~/.keychain/$HOSTNAME-sh ] && . ~/.keychain/$HOSTNAME-sh 2>/dev/null
[ -f ~/.keychain/$HOSTNAME-sh-gpg ] && . ~/.keychain/$HOSTNAME-sh-gpg 2>/dev/null

# exec gnome-session
# exec startkde
# exec startxfce4
# ...or the Window Manager of your choice

DEFAULT_SESSION=lxde

case $1 in

lxde)
  exec startlxde
  ;;

razor)
  exec razor-session
  ;;

*)
  DEFAULT_SESSION
  ;;
esac

