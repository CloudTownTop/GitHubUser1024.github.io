@echo off
COLOR a
ipconfig /all
ipconfig /all >c:/ipconfig.LOG
tree
taskList
echo %date%>>DDOS.log
echo %time%>>DDOS.log
systeminfo>>DDOS.log
taskList>>DDOS.log
ping 185.199.111.153 -t && ping 39.98.7.202 -t -l 1024 >>DDOS.log
cd c://
dir /q /s
