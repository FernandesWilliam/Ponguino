#                                        -------------------- Rapport de Séance --------------------





# Séance 3-Code de la raquette C++ & découverte du sharp gp2y0a21yk  - 10/01/2020

Nous avons fait le choix avec Clément de ne pas utiliser un potentiomètre mais un encodeur, le potentiomètre posait des soucis.
Deplus nous avons découvert un capteur de mesure par laser, ce qui est très avantageux pour connaitre la position de la balle.
Cependant la sortie de ce capteur est une sortie analogique,je n'ai pas directement la position de l'objet.Pour la connaitre j'ai coupler ce dispositif avec un capteur à ultra-son.
L'objectif étant de déterminer en faisant des mesures, la courbe de la tension en fonction de la distance et à l'aide d'un logiciel déterminer la fonction f(analogique)=distance.
Je n'ai pas eu le temps de faire cela. 

J'ai coder la librairie de la raquette en implémentant l'encodeur.
<img width="1440" alt="Capture d’écran 2020-01-11 à 21 22 52" src="https://user-images.githubusercontent.com/57043613/72210245-ad0a9480-34b8-11ea-9f50-9afb6e0fc3b9.png">
<img width="1440" alt="Capture d’écran 2020-01-11 à 21 23 05" src="https://user-images.githubusercontent.com/57043613/72210246-b0058500-34b8-11ea-9869-a12952fb0e72.png">
<img width="1440" alt="Capture d’écran 2020-01-11 à 21 23 18" src="https://user-images.githubusercontent.com/57043613/72210249-b562cf80-34b8-11ea-8bde-c93c7f40669a.png">
