# Questions de bases
====================

### 1.
------
La fonction `printf` va afficher sur la sortie standard la chaîne de caractères
contenue dans la variable `a` en remplaçant le `%d` cette valeur. Les % indiquent le
format à utiliser lors de l'affichage de la variable `a`.

### 2.
------
L'option `Werror` de `gcc` sert à transformer tous les `warning` en `error`

### 3.
------
Le `warning` quand à l'utilisation implicite de la fonction `printf` est transformé
en `error`. Dès lors, gcc ne compile pas et l'exécutable n'est pas crée.
Pour corriger le problème, il faut inclure le header contenant la déclaration de
la fonction `printf` c'est-à-dire `stdio.h`.
Le code corrigé est ainsi :

    #include <stdio.h>

    int main(int argc, const char *argv[])
    {
            int a = 1252;
            printf("%d\n", a);
            return 0;
    }

Idéalement, la fonction doit aussi retourner 0. (mais dans notre cas, même avec
l'option `Werror`, gcc ne se plaint pas).

### 4.
------
Le compilateur gcc compile quand même s'il y a des `warning`. Ceux-ci ne sont là
que pour avertir le programmeur que certaines lignes n'ont pas de sens. Le cas
où le compilateur ne compilera pas est quand il rencontrera une `error`.

### 5.
------
La variable `$?` permet de récupérer la valeur de retour du denrier programme exécuté.
Ceci permet de vérifier si un programme s'est bien exécuté car on sait qu'un programme
s'étant bien exécuté doit retourner la valeur '0'.

### 6.
------
L'option `Wall` de `gcc` permet d'afficher des `warnings` supplémentaires qui n'étaient
pas activés par défauts. Citons par exemple les `warnings` quand à la non-utilisation
d'une variable déclarée.

### 7.
------
Hum hum what the fuck

### 8.
------
