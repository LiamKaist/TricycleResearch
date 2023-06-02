# Le Radar :

## Objectif : 
Notre objectif principal pour le radar était de pouvoir récupérer toutes les données envoyées par celui-ci à travers un éditeur ROS2. Après avoir correctement configuré le matériel, l'objectif était de coder l'éditeur ROS2. N'ayant aucune connaissance préalable du radar ARS-408-21 fabriqué par Continental, ni de la conception du CAN-Bus, la configuration du matériel a pris plus de temps que prévu.

## Methodes et Résultats :

### Description du ARS-408-21 : 
D'après la documentation technique et un état de l'art sur les radars, voici un bref aperçu de l'ARS-408-21 de Continental.[Insérer la description]  
Ce radar est utilisé pour la détection d'objets dans l'industrie automobile. Il peut balayer les zones proches ou éloignées en fonction de sa configuration. Le réglage de la portée lointaine lui permet de détecter des objets jusqu'à 250 mètres, tandis que la portée proche ne peut atteindre que des objets situés à moins de 70 mètres, mais dispose d'un champ de vision plus large. Ce radar n'est pas équipé d'une seule antenne, mais de plusieurs. Cela lui permet de détecter plusieurs objets simultanément. 

Voici une description simplifiée de son fonctionnement :  
En utilisant le principe Doppler, il détecte une multitude de points dans l'espace, un composant traite cette information et rassemble les points en grappes si l'utilisateur le demande. Ces groupes, ainsi que des informations supplémentaires, sont envoyés à un émetteur-récepteur CAN (Controller Area Network) qui traduit ensuite les données en messages standard du protocole CAN. Ces messages sont transmis, selon le protocole, via deux fils de données, CANH et CANL. Ce capteur peut ensuite être intégré dans un bus CAN personnalisé. Lorsque ce bus est opérationnel, des messages peuvent être envoyés au radar pour modifier ses paramètres, ces messages sont détaillés dans la documentation technique du radar.

### Description du CAN-USB :

##### Implémenter les drivers : 
Pour pouvoir utiliser le convertisseur CAN-USB, il faut installer les bons pilotes. Selon la documentation fournie par ESD, socketCAN, un pilote Linux intégré, est suffisant. Toutefois, une application Windows a également été fournie et utilisée en parallèle pour s'assurer que les problèmes rencontrés étaient moins susceptibles d'être liés au logiciel.

##### Configuration du CAN-BUS :
Nous avons dû mettre en place un BUS CAN composé du Radar, du convertisseur CAN-USB et de 2 résistances de terminaison, bien que ces résistances puissent être plus importantes dans des bus plus longs qui intègrent beaucoup plus de capteurs. Le BUS doit être mis à la terre à un endroit, nous avons utilisé la masse du CAN-USB. Selon les normes CAN, le bus obéit aux règles les plus élémentaires et les plus cruciales. La longueur du BUS doit également être prise en compte, ce qui sera discuté dans la partie "Problèmes et tests".

Problèmes et tests :
Aucune donnée n'est reçue du radar, nous avons regardé sous plusieurs angles pour essayer de résoudre le problème :
- Il se peut que les résistances de terminaison de 120 Ohm soient en cause.
- C'est peut-être la longueur du câble du radar.
- Peut-être les connexions entre les câbles
- Il peut s'agir de la puissance disponible pour le radar (puissance insuffisante)
- Il peut s'agir de la configuration de l'expérience (à l'intérieur ou à l'extérieur)
- La configuration du logiciel sur mon PC Linux
- Il se peut que ce soit la faute de l'émetteur-récepteur ESD CAN -USB
- Il peut s'agir d'un défaut de l'émetteur-récepteur du radar.
- Il peut s'agir d'un problème de mise à la terre
- Il peut s'agir d'un problème de débit de données 
- Il peut s'agir d'un problème de configuration du radar, puisqu'il peut être configuré en envoyant un message au BUS.

Test extra :
Afin de renforcer notre hypothèse de dysfonctionnement du radar, nous avons réalisé une expérience supplémentaire. Nous avons utilisé un module de communication CAN qui peut envoyer des messages à un BUS CAN. Pour envoyer ces messages, nous avons écrit un script en utilisant une bibliothèque C++ open source spécifique au microprocesseur que nous avons utilisé, plus précisément un ESP8266. Nous avons pu configurer correctement un simple CAN BUS en utilisant les pilotes Linux socketCAN intégrés. Voici une image de la configuration finale :
 
![CANUSBsimpleSetup](https://github.com/LiamKaist/TricycleResearch/assets/117256858/63c3bfba-daea-49d8-a666-00e248d66d73)

Cette expérience nous a permis de vérifier si nous n'avions pas fondamentalement mal compris un concept de configuration du CAN BUS. Nous en sommes arrivé à la conclusion que le radar est toujours au centre du problème. 
Les messages standard CAN ont été transférés sans problème, nous avons pu envoyer des messages au BUS et écouter les messages qui y étaient envoyés, simultanément. Voici la sortie du candump (Utilitaire qui affiche les messages CAN dans leur format lisible par l'homme. 
 
![CANDump](https://github.com/LiamKaist/TricycleResearch/assets/117256858/9bec96fe-8b18-4ed4-889a-4ed96711af75)

## Conclusion :
La seule conclusion à laquelle nous sommes parvenu, après toutes ces recherches, est qu'il y a un problème avec le radar lui-même. Il n'envoie aucune information, que nous le testions à l'intérieur ou à l'extérieur. 

