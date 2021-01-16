eval "cp mntx /bin/mntx ; chmod u+x /bin/mntx ; echo ok > /tmp/st"
if [ `head /tmp/st` == "ok" ]
then
	echo "<^> Installed "
fi
