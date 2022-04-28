#!/bin/bash
read -p "veuilez entre un nom de fichier " fich
if [ -f $fich ] ; then
	echo " ce fichier et un fichier ordinaire "
else 	
	echo "ce fichier  n'est pas un fichier ordinaire "
fi 
nom=poubelle 
if [ -e  /home/$nom ] ; then 
 	echo "repertoir poubelle exist a la rasine de mon compte "
else 
	mkdir /home/$nom
fi 
 mv $fich /home/$nom
	



	
