# TP-PlusOuMoins

Le programme fourni est un petit jeu pour faire deviner un nombre à l'utilisateur.
En fonction du nombre saisi le programme nous dit si l'on est supérieur ou inférieur au nombre à trouver.

Répondez aux questions suivantes:

:bangbang: Attention: Commitez et poussez votre avancement régulièrement, la régularité et les messages des commit font partis des critères d'évaluation. Au MINIMUM un commit par question.

:bangbang: Votre programme doit être lisible (indentation et respect des règles de nommage.

## Compilez puis Testez le programme pour bien comprendre son fonctionnement

## Commentez les différente étapes du programme proposé.

## Réaliser l'agorithme en pseudo code dans un fichier nommé pseudoCode.txt


Plusieurs pistes d'améliorations doivent être implémentées. Voici leur descriptions, à vous de les réaliser .

## Faites un compteur de « coups ». 
Ce compteur devra être une variable que vous incrémenterez à chaque fois que vous passez dans la boucle. Lorsque l'utilisateur a trouvé le nombre mystère, vous lui direz « Bravo, vous avez trouvé le nombre mystère en 8 coups » par exemple.

## une autre partie?
Lorsque l'utilisateur a trouvé le nombre mystère, le programme s'arrête. Pourquoi ne pas demander s'il veut faire une autre partie ?
Si vous faites ça, il vous faudra faire une boucle qui englobera la quasi-totalité de votre programme. Cette boucle devra se répéter TANT QUE l'utilisateur n'a pas demandé à arrêter le programme. Je vous conseille de rajouter une variable booléenne continuerPartie.

## Mode 2 joueurs
Implémentez un mode 2 joueurs ! Attention, je veux qu'on ait le choix entre un mode 1 joueur et un mode 2 joueurs !
Vous devrez donc faire un menu au début de votre programme qui demande à l'utilisateur le mode de jeu qui l'intéresse.
La seule chose qui changera entre les deux modes de jeu, c'est la génération du nombre mystère. Dans un cas ce sera un rand()comme on a vu, dans l'autre cas ça sera… un scanf.

Créez plusieurs niveaux de difficulté. Au début, faites un menu qui demande le niveau de difficulté. Par exemple :

1 = entre 1 et 100 ;

2 = entre 1 et 1000 ;

3 = entre 1 et 10000.



Source : https://openclassrooms.com/fr/courses/19980-apprenez-a-programmer-en-c/14828-tp-plus-ou-moins-votre-premier-jeu
