# Semaine 1 : Questions à Choix Multiples
=========================================
## Question 1. Commande man(1)
-------------
Un bref coup d'oeil à la page de manuel de man nous indique que l'option `-k`
cherche les pages de manuel qui contiennent l'argument passé en paramètre.
La commande pour afficher toutes les pages de manuel dont le résumé contient
"intro" est donc `man -k intro`.

## Question 2.Commande ls(1)
-------------
Un bref coup d'oeil à la page de manuel de ls nous indique que :
* `ls` sans argument affiche les fichiers et sous-répertoires du répertoire courant
* `ls -a` affiche tous les fichiers et sous-répertoires du répertoire courant
ainsi que les fichiers et sous-répertoires dont le nom commence par un '.'
* `ls -f` affiche les fichiers et sous-répertoires du répertoire courant dans l'ordre
où ils sont stockés, sans les trier
* `ls -l` affiche les fichiers et sous-répertoires du répertoire courant avec
leurs droits associés, leurs liens, leur auteur,...
* `ls -r` affiche affiche les fichiers et sous-répertoires du répertoire courant en inversant le tri
* `ls -R` affiche récursivement le contenu des sous-répertoires
* `ls *` affiche le contenu des sous-répertoires

## Question 3. Premier programme en langage
-------------------------------------------
Le programme 'Hello world' s'écrit de manière correcte comme suit :

    #include <stdio.h>
    int main(int argc, const char *argv[]){
    printf("Hello, world\n");
    }

avec l'inclusion de la librairire `stdio.h` nécéssaire à l'utilisation de
la fonction `printf` et la fonction main étant définie de type int (car doit
renvoyer '0' ou '1')

## Question 4. Deuxième programme en langage C
----------------------------------------------
Le programme correct est le suivant :

    #include <stdio.h>
    int main(int argc, const char *argv[]) {
      int a = 1252;
      printf("SINF%d\n", a);
    }

## Question 5. Arguments passés à un programme en langage C
-----------------------------------------------
Les assertions vérifiées sont les suivantes :
* Lors de l’exécution de la fonction `main`, `argc` est initialisé au nombre
d’arguments passés au programme (y compris le nom de l’exécutable lui-même)
* Lors de l’exécution de la fonction `main`, le tableau `argv[]` contient dans
`argv[0] le nom du programme, dans `argv[1]` le premier argument, etc.
* La fonction `atoi`permet de convertir une chaîne de caractères en l’entier équivalent.
