Etape 1:
placer le plugin Oss117plugin dans le dossier plugin de imageJ
$ ~/.imagej/plugins

Etape 2:
ouvrir imagej
Creer le stack dans imagej :
File -> import -> image sequence -> sélectioner n'importe quel image du fichier -> OK
Le sha ne marche pas si ouvre un stack déjà créé (problème de chemin et de nom à cause slices/stack) /!\

Etape 3:
Cliquer sur l'oeil gauche
Cliquer sur l'oeil droit
(Le changement d'image se fait automatiquement après le deuxième clic)
En cas d'erreur, finisser l'image raté pour passer à la suivante, puis cliquer sur la roulette pour revenir à l'image raté. Le bouton permettant de revenir en arrière peut être changer ligne 153 "BUTTON2" par "BUTTON3" pour le clic droit (cependant le premier clic droit déroule un menu).

Etape 4:
Le fichier des résultats est enregistré sous le nom de "positionReference.txt" dans le dossier contenant les images utilisées.
