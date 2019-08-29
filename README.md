# TP-PlusOuMoins

Jeu pour deviner un nombre
Le programme fourni est un petit jeu pour faire deviner un nombre à l'utilisateur.

## Testez le programme pour bien comprendre son fonctionnement

## Réaliser l'agorithme en pseudo code dans un fichier nommé pseudoCode.txt


:bangbang: Attention: Commitez et poussez votre avancement régulièrement, la régularité et les commentaires des commit font partis des critères d'évaluation.

Plusieurs pistes d'améliorations doivent être implémentées.Voici leur descriptions, à vous de les réaliser .

## Faites un compteur de « coups ». 
Ce compteur devra être une variable que vous incrémenterez à chaque fois que vous passez dans la boucle. Lorsque l'utilisateur a trouvé le nombre mystère, vous lui direz « Bravo, vous avez trouvé le nombre mystère en 8 coups » par exemple.

## une autre partie?
Lorsque l'utilisateur a trouvé le nombre mystère, le programme s'arrête. Pourquoi ne pas demander s'il veut faire une autre partie ?
Si vous faites ça, il vous faudra faire une boucle qui englobera la quasi-totalité de votre programme. Cette boucle devra se répéter TANT QUE l'utilisateur n'a pas demandé à arrêter le programme. Je vous conseille de rajouter une variable booléennecontinuerPartieinitialisée à 1 au départ. Si l'utilisateur demande à arrêter le programme, vous mettrez la variable à 0 et le programme s'arrêtera.

## Mode 2 joueurs
Implémentez un mode 2 joueurs ! Attention, je veux qu'on ait le choix entre un mode 1 joueur et un mode 2 joueurs !
Vous devrez donc faire un menu au début de votre programme qui demande à l'utilisateur le mode de jeu qui l'intéresse.
La seule chose qui changera entre les deux modes de jeu, c'est la génération du nombre mystère. Dans un cas ce sera unrand()comme on a vu, dans l'autre cas ça sera… unscanf.

Créez plusieurs niveaux de difficulté. Au début, faites un menu qui demande le niveau de difficulté. Par exemple :

1 = entre 1 et 100 ;

2 = entre 1 et 1000 ;

3 = entre 1 et 10000.

Si vous faites ça, vous devrez changer votre constante MAX… Eh oui, ça ne peut plus être une constante si la valeur doit changer au cours du programme ! Renommez donc cette variable ennombreMaximum(vous prendrez soin d'enlever le mot-cléconstsinon ça sera toujours une constante !). La valeur de cette variable dépendra du niveau qu'on aura choisi.




Source : https://openclassrooms.com/fr/courses/19980-apprenez-a-programmer-en-c/14828-tp-plus-ou-moins-votre-premier-jeu
