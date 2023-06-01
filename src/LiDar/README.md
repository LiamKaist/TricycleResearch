# Le LiDAR

# Présentation
Le LiDAR est un capteur qui va permettre de réaliser le mapping de l'environnment en envoyant 300 000 points par seconde à 360°


# JSP
rs_lidar_ws : Un workspace ROS2 récupéré sur le github suivant =>
rs_customlidar_ws : Un workspace ROS2 créé par Liam CHRISMENT , il permet de s'abonner au topic créé par rs_lidar_sdk afin de récupérer les données que l'on souhaite, de manière directe.

Prérequis : ROS2 Humble sur Ubuntu 22.04 Jammy Jellyfish

Pour faire marcher le rs_lidar_ws qui permet de récupérer les données du Lidar et les afficher sur RVIZ, il faut suivre la procédure suivante:
