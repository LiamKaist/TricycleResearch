Pour pouvoir utiliser la caméra, nous avons installé un driver pour les caméras de type v4l. Voir la suite pour le guide d'installation.

Lisez https://index.ros.org/r/usb_cam 

1/ Installation de v4l-utils avec la commande suivante:

```
sudo apt-get install v4l-utils 
```

La commande suivante permet de lister les caméras v4l qui sont reconnues par le système d'exploitation Linux :

```
v4l2-ctl --list-devices
```
Assurez vous que la caméra est présente dans cette liste.

Ensuite, il faut installer le DRIVER/Pilote suivant (driver pour ros2_humble) :
sudo apt-get install ros-humble-usb-cam

3/ Modification des paramètres :

Avant de lancer la caméra, il est nécessaire de modifier les paramètres par défaut du pilote, qui se trouvent dans le fichier /opt/ros/humble/share/usb_cam/config/params.yaml. Ce fichier comprend un ensemble de paramètres, dont le format pris en charge par la caméra. Choisissez le format yuv2rgb à la place de mjpeg2rgb.

Il faut également changer le paramètre video_device , il faut que le video device utilisé soit bien celui associé à votre caméra , vous pouvez vérifier ça avec la commande :

```
v4l2-ctl --list-devices
```

4/ Lancement du pilote :

Pour lancer le package ROS, exécutez simplement la commande suivante :

```
ros2 launch usb_cam demo_launch.py
```

Si tout se passe bien, une fenêtre s'ouvre avec le retour de la caméra.

