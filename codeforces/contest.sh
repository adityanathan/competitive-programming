cd /Users/harkiratdhanoa/Desktop/iitd/competitive/codeforces

if [ $# -ne 0 ]; 
then	if ! [ -d "$1" ]; 
	then
		mkdir $1
		cd $1


		cat /Users/harkiratdhanoa/Desktop/iitd/competitive/codeforces/template.cpp 		| tee -a a.cpp b.cpp c.cpp d.cpp > /dev/null

		# subl a.cpp
	else
		cd $1
	fi

fi

clear
open .