# Le LiDAR

## Présentation
Le LiDAR que nous possédons est un LiDAR 16 couches réalisé par la société RoboSense.  

C'est un capteur qui va permettre de réaliser le mapping de l'environnment en envoyant 300 000 points par seconde à 360°. Le LiDAR va envoyer dans son environnement des signaux laser. Un phénomère de réflexion va avoir lieu avec l'ensemble des éléments présents autour de lui. Un détecteur présent dand le LiDAR va alors recevoir ces signaux réfléchis et va pouvoir ainsi calculer la distance avec chaque point de l'environnement, et ainsi, créer le mapping.

## Mise en place / Hardware
  
Alors vous voulez faire fonctionner le LiDAR ? Venez ici que je vous guide !

Tout d'abord, sortez le LiDAR de sa boîte et alimentez le en 12V grâce à l'adaptateur fourni par le constructeur.

Ensuite, connectez un ordinateur sur lequel se trouve une version de ROS2 (Dans notre cas, nous utilisions Humble avec Ubuntu 22.04 Jammy Jellyfish) en utilisant le câble Ethernet fourni et le reliant à l'adaptateur. Il servira ainsi de Switch Ethernet.

Le LiDAR envoie ses données à l'adresse **IP 192.168.1.102**, il faut s'assurer que l'adresse IP associée à l'une de vos interfaces Ethernet soit configurée avec cette adresse (`ifconfig <name of interface> 192.168.1.102 netmask 255.255.255.0`, commande utilisée sur Linux).

Maintenant, il faut pouvoir récupérer et afficher les données reçues sur un terminal ou ROS2. Voir la partie Software ci-dessous!
  
## Mise place / Software
  
Pour faire marcher le rs_lidar_ws qui permet de récupérer les données du Lidar et les afficher sur RVIZ, il faut suivre la procédure suivante:  
*(Prérequis : Une version de ROS2 (La notre étant ROS2 Humble))*
  
__rs_lidar_ws__ est un Workspace ROS2 récupéré sur le GitHub suivant => [GitHub](https://github.com/RoboSense-LiDAR/rslidar_sdk/blob/main/doc/howto), il permet de faire fonctionner le LiDAR.
  
__rs_customlidar_ws__ est un workspace ROS2 créé par Liam CHRISMENT, il permet de s'abonner aux topics créés par rs_lidar_sdk afin de récupérer les données que l'on souhaite, de manière directe.
  
Pour visualiser les données du LiDAR avec Rviz il faut que vous ayez installé Rviz. Un tutoriel est disponible a l'adresse suivant :  
[Installation Rviz](https://installati.one/install-rviz-ubuntu-22-04/).
 
Après, il faut se placer dans le src de rs_lidar_ws et "sourcer" l'environnement ROS2 avec la commande suivante :  
`source /opt/ros/foxy/setup.bash `. 
Cela va permettre d'utiliser les fonctionnalités ROS2.
  
Ensuite il vous faudra "sourcer" le fichier setup.sh contenu dans le fichier install qui se trouve dans le répertoire source de rs_lidar_ws, voici la commande :  
`source setup.bash`
Il vous suffit désormais de lancer le node fourni en utilisant la commande suivante :
`ros2 launch rslidar_sdk start.py`
  
Si vous ne voyez rien sur Rviz, c'est que le fichier de configuration de rs_lidar_ws est mal configuré, il vous faut changer le fichier config.yaml dans le répertoire suivant => [ros2_lidar_ws/src/rslidar_sdk/config](ros2_lidar_ws/src/rslidar_sdk/config)
   
Dans notre cas, il a fallu changer le paramètre indiquant le type de Lidar utilisé (Nous avons mis lidar_type : RS16 , car notre LiDAR est le LiDAR 16 couches RoboSense.

Après avoir lancé ce node, vous pouvez lancer le node fourni dans rs_custom_lidar.
Pour cela il vous faudra "sourcer" le fichier setup.bash dans le répertoire ros2_custom_lidar :  
  `source setup.bash`
  
Il faut lancer l'éxécutable (Node ROS2) nommé "lidar_data_subscriber_executable", pour cela il faut éxecuter la commande suivante :  
  `ros2 run my_cpp_pkg lidar_data_subscriber_executable`
  
Voilà ! Ce Node ira s'abonner au topic "rslidar_points" (généré par le Node executé dans rs_lidar_ws)
Utilisez la commande : rqtgraph (voir internet pour les paquets à installer pour avoir cette commande)
Cette commande permet de visualiser les Nodes, les topics et autres qui s'executent sur l'ordinateur.
  


