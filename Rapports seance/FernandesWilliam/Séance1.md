#                                        -------------------- Rapport de Séance --------------------





# Séance 1- Maquette & Déplacement de la raquette & Transformation en distance de jeu- 13/12/2019 

Au début de la séance j'ai commencé à réaliser au brouillon un aperçu final de notre projet(aperçu ci-dessous), afin que Clément et moi puissions dimensionner la taille du Pong : la taille du plateau choisi est (60x40 cm) ce qui nous permet de savoir la taille des autres matériaux à prendre puisqu'ils dependaient tous du plateau. 
Avec Clément nous avons vu si il était nécessaire de commander des matériaux, il se trouve que la plus part des matériaux dont nous avions besoins étaient à notre disposition : aimant, tige en fer, plateau en PVC,moteur continue.




![Maquette](https://user-images.githubusercontent.com/57043613/70851403-dbcf2400-1e94-11ea-99bd-a4226510638f.jpg)


Ensuite, je me suis concentré sur la gestion du déplacement des raquettes côté joueur : Le joueur déplace à la main la raquette, le déplacement de celle-ci déplacera électroniquement la vrai raquette du jeu.
Il fallait donc que je récupère la position de la raquette : Pour ceci j'ai utilisé un émetteur-récepteur,l'objectif étant 
de récupérer la distance qui sépare la raquette de l'émetteur-récepteur afin de transformer cette position en position de jeu. 
![Deplacement_raquette ](https://user-images.githubusercontent.com/57043613/70851360-767b3300-1e94-11ea-883e-91f00e203108.jpg)
Cependant, parfois l'émetteur-récepteur renvoie des 0, alors que l'objet se trouvait à une distance éloignée, cela est dû au fait qu'il ne recevait pas d'ultra-son, ce premier problème a été solutionné avec le programme.Seulement j'ai remarqué après plusieurs test que lorsque ma raquette était immobile, la distance renvoyée variait de plus ou moins 1 cm, ce qui risque d'impacter le bon déroulement du jeu. 
Je n'ai pas encore trouvé de solution même si j'envisage de changer d'émetteur-récepteur, et d'en prendre un plus précis, et avec un programme je pourrais solutionner cette variation. 

<img width="480" alt="Position_raquette" src="https://user-images.githubusercontent.com/57043613/70851217-cf49cc00-1e92-11ea-9251-cd0ce60d5e72.png"> 


Enfin j'ai récupérer un code existant du jeu Pong,et j'ai commencé à le lire, il faut que je l'adapte au jeu.
