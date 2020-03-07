#                                        -------------------- Rapport de Séance --------------------





# Séance 8- Finalisation de notre projet - 06/03/2020 


# Pendant les vacances :
Lors des vacances, nous nous sommes vu pour avancer sur la maquette. Il nous manquait l'assemblage de toute les parties : les raquettes et la balle.
Egalement le système de renvois de la balle lorsque qu'il y'a contact avec la raquette, ce que nous avons solutionné avec beaucoup de difficulté.
Tout les vrais problèmes ont commencé ces vacances, notamment le renvois de la balle, ainsi que le relancement du jeu après avoir marqué. 
Nous avons solutionné le relancement de la balle , en stoppant le moteur de l'axe X et Y,puis faire reculer celle-ci de quelque centimètre selon l'axe Y. 
Quant à l'autre problème qui nous auras pris beaucoup de temps, Clément l'expliquera dans son rapport, vu qu'il s'est chargé de le solutionner.
Nous sommes tombés face à un dernier problème qui nous a un peu retardé :
La carte ne contennait pas assez de port. 
Deplus j'avais cassé une broche du module bluetooth, et je n'avais pas de faire à souder, ce qui m'as également fait perdre du temps.


lien vidéo de ce que nous avons réalisé pendant les vacances (déplacement de la balle avec le rebond sur la raquette): https://www.youtube.com/watch?v=UECWS0yqtCc

# Avant la séance :
Clément a récuperer une carte mega. Nous avons enfin pu lier raquette et balle, et après quelque heures du a des problèmes de cablages, et de modules qui ne fonctionnent plus, nous nous sommes aperçu d'un dernier problème :
Lorsque tout était relier plus rien ne fonctionnait car notre machine demandait plus d'Ampère que ce que nous donnait l'alimentation.
J'ai pu au moins souder le module bluetooth que j'avais cassé. 
Nous avons du attendre la séance. 


# Lors de la séance :

Pendant que Clément changeait d'alimentation et rebranchait les cables, j'ai fait le montage au propre du système de score avec un écran lcd et un module bluetooth pour recevoir l'information.

J'ai également fait le code de réception de donnée et de modification du score lorsque le module reçoit une information.S'il reçoit "0" le joueur 1 a marqué et inversement.

Enfin avec Clément nous avons pu tester toute la machine unifié, et à notre plus grande joie notre projet est fonctionnel mais fragile:
les modules crament assez rapidement, aussi les cables 

Pour le relancement de la partie, la balle recule selon l'axe Y et fait des va-et-vient selon l'axe X en attendant l'appuie sur un bouton. 
Toutefois je n'ai pas réussi à envoyé les données au module bluetooth gérant le score.
Problème que je vais régler avant le jour de l'oral.


Code final de la balle ,du jeu PONG dans arduino et de la gestion de score :

<img width="1296" alt="Capture d’écran 2020-03-07 à 11 57 49" src="https://user-images.githubusercontent.com/57043613/76142131-0b906100-606b-11ea-83dc-d4afa40486fa.png">
<img width="1298" alt="Capture d’écran 2020-03-07 à 11 57 58" src="https://user-images.githubusercontent.com/57043613/76142132-0b906100-606b-11ea-9688-80c297f39299.png">
<img width="1300" alt="Capture d’écran 2020-03-07 à 11 58 08" src="https://user-images.githubusercontent.com/57043613/76142133-0cc18e00-606b-11ea-913d-aefd3c1aa16d.png">
<img width="1291" alt="Capture d’écran 2020-03-07 à 11 58 20" src="https://user-images.githubusercontent.com/57043613/76142134-0d5a2480-606b-11ea-99af-a8beb0c2213b.png">
<img width="1299" alt="Capture d’écran 2020-03-07 à 11 58 31" src="https://user-images.githubusercontent.com/57043613/76142135-0df2bb00-606b-11ea-9e99-8c59c670df2e.png">
<img width="1439" alt="Capture d’écran 2020-03-07 à 12 00 41" src="https://user-images.githubusercontent.com/57043613/76142168-58743780-606b-11ea-99da-0a1b6d6ac4b1.png">

<img width="1424" alt="Capture d’écran 2020-03-07 à 12 02 28" src="https://user-images.githubusercontent.com/57043613/76142200-9d986980-606b-11ea-8d68-4f8626eb3cba.png">


