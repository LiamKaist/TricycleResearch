# Le LiDAR

# Présentation
Le LiDAR que nous possédons est un LiDAR 16 couches réalisé par la société RoboSense. C'est un capteur qui va permettre de réaliser le mapping de l'environnment en envoyant 300 000 points par seconde à 360°. Le LiDAR va envoyer dans son environnement des signaux laser. Un phénomère de réflexion va avoir lieu avec l'ensemble des éléments présents autour de lui. Un détecteur présent dand le LiDAR va alors recevoir ces signaux réfléchis et va pouvoir ainsi calculer la distance avec chaque point de l'environnement, et ainsi, créer le mapping.

# Mise en place / Hardware
Pour le mettre en place il est important de pouvoir alimenter le LiDAR à 12V comme c'est recommendé dans la datasheet. Il faut également utiliser le boitier fourni par RoboSense que l'on doit connecter avec le PC via un cable Ethernet. Ce boitier va servir de Switch Ethernet. 

# Mise place / Software
rs_lidar_ws : Un workspace ROS2 récupéré sur le github suivant =>
rs_customlidar_ws : Un workspace ROS2 créé par Liam CHRISMENT , il permet de s'abonner au topic créé par rs_lidar_sdk afin de récupérer les données que l'on souhaite, de manière directe.

Prérequis : ROS2 Humble sur Ubuntu 22.04 Jammy Jellyfish

Pour faire marcher le rs_lidar_ws qui permet de récupérer les données du Lidar et les afficher sur RVIZ, il faut suivre la procédure suivante:
