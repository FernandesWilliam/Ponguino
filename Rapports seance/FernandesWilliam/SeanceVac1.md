#                                        -------------------- Rapport de Séance --------------------


# SéanceVac1 -Codage du jeu pong sur une interface graphique & Nouveau choix de déplacement des raquettes - 22/12/2019 



Afin de pouvoir visualiser le jeu, et coder ses différentes parties, il fallait que je trouve un moyen d'accéder à une interface graphique, en cherchant sur l'internet j'ai pu constater qu'il était possible de faire communiquer Arduino avec Processing (environnement de développement en java). Après une prise en main avec le software, j'ai commencé à coder une ébauche du jeu Pong : une raquette, une balle qui se déplace , et un mur, et j'ai pu contrôler ma raquette via un potentiomètre comme ci dessus. 
J'ai également pu essayé de contrôler la raquette avec l'émmeteur-récepteur et j'ai pu constater que dû à un énorme manque de précision la raquette se déplacait de manière discontinue (saut de distance), c'est pourquoi j'ai fait le choix de changer le système de déplacement des raquettes , en le remplacant pour l'instant par un potentiomètre, ou un joystick. (pour mes test je continuerais un potentiomètre), le boutton poussoir servant de lancement de partie. 


Ebauche du jeu pong et interface grafique crée, pas de photo du montage, très simple, branchement d'un potentiomètre et d'un bouton poussoir :

<img width="1439" alt="Capture d’écran 2019-12-24 à 17 55 56" src="https://user-images.githubusercontent.com/57043613/71420727-36c40080-2677-11ea-931c-570833a2e3ff.png">



<img width="1435" alt="Capture d’écran 2019-12-24 à 17 56 33" src="https://user-images.githubusercontent.com/57043613/71420752-48a5a380-2677-11ea-95c1-686666c4fe48.png">


<img width="1000" alt="Capture d’écran 2019-12-24 à 17 57 08" src="https://user-images.githubusercontent.com/57043613/71420760-578c5600-2677-11ea-84a7-babc302e7377.png">


<img width="500" alt="Capture d’écran 2019-12-24 à 17 57 31" src="https://user-images.githubusercontent.com/57043613/71420768-6410ae80-2677-11ea-85ba-7729b3120615.png">





