#                                        -------------------- Rapport de Séance --------------------

# Séance 2- Code pour déplacer la raquette avec un potentiomètre & Librairie en C++ - 08/01/2020 


En début de cours j'ai presenté à Clément ce que j'avais effectué durant les vacances, notamment l'interface graphique du jeu et le programme qui en découle. Nous avons ensuite réflechi au moyen de savoir connaître la position de la balle: On a décidé  d'utiliser des microrupteurs, attachés à la balle et des encodeurs des moteurs ,ce système permet 2 choses:
- connaître la position de la balle en initialisant la balle dans un coin du jeu, en connaissant la vitesse de rotation du moteur pouvoir estimer plus ou moins la position de la balle.
- Ce système permet de améliorer la précision de la position de la balle et des raquettes, en effet dès que la balle ou la paddle toucherons un mur une fonction redéfinira la position selon un axe.


J'ai donc programmer le déplacement de la raquette en considérant les variations du potentiomètre. Afin d'initialiser la raquette,à l'allumage de la machine Ponguino la raquette se déplace jusqu'à la rencontre d'un obstacle, cette position correspond au 0.On as pu testé avec Clément le programme, cela fonctionne.
<img width="725" alt="Capture d’écran 2020-01-09 à 20 14 25" src="https://user-images.githubusercontent.com/57043613/72097552-e7d7c580-331c-11ea-91cb-2bc15b0cfd42.png">
<img width="1439" alt="Capture d’écran 2020-01-09 à 20 14 41" src="https://user-images.githubusercontent.com/57043613/72097604-0342d080-331d-11ea-8cc9-4ef75dae401c.png">
<img width="1440" alt="Capture d’écran 2020-01-09 à 20 15 02" src="https://user-images.githubusercontent.com/57043613/72097621-0dfd6580-331d-11ea-8e06-04c1d41c0407.png">


Ensuite j'ai commencé à étudier les librairies en C++, et j'ai commencé un début de classe notamment celle de la raquette.Je continuerais à la prochaine séance.
<img width="1435" alt="Capture d’écran 2020-01-09 à 20 22 38" src="https://user-images.githubusercontent.com/57043613/72097974-d642ed80-331d-11ea-80b2-8c526db04930.png">

<img width="1438" alt="Capture d’écran 2020-01-09 à 20 22 46" src="https://user-images.githubusercontent.com/57043613/72097989-dfcc5580-331d-11ea-8dac-4326a91c5335.png">
