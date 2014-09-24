test=`ifconfig | grep "inet " | tr -d '\t' | sed "s/inet //g" | sed "s/ netmask.*//g"`
if ["$test" = ""];
then
echo "Je suis perdu !"
else
ifconfig | grep "inet " | tr -d '\t' | sed "s/inet //g" | sed "s/ netmask.*//g"
fi 2> /dev/null
