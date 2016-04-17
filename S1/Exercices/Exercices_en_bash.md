# Exercices en bash
====================
## 1.
-----
La commande `mkdir` permet de créer nouveau répertoire dont le nom est celui passé
en argument et la commance `echo` permet d'afficher sur la sortie standard le texte
passé en argument. Si la commande `echo` est suivire de `>>`, cela a pour conséquence
d'enregistrer le texte pris en argument pas `echo` dans le fichier suivant `>>`
On crée donc le nouveau répertoire avec la commande `mkdir my_dir` et on enregistre le
texte voulu dans un fichier avec la commande `echo "Insérer" >> first`

## 2.
-----
La commance `cp` permet de copier un fichier (1er argument) vers un autre (second
argument).
On copie donc le fichier `first` vers le fichier `second` à l'aide de la commande
`cp first second`. On ajoute ensuite la ligne voulue à l'aide de la commande `echo "Retirer" >> second`

## 3.
-----
En utilisant la commande `ls` suivie de l'option `-s` soit `ls -s`

## 4.
-----
On peut utiliser la commande `cat` au lieu de `echo` en la faisant suivre pas '>>'
pour afficher dans un nouveau fichier les lignes voules.
On tape donc à la suite les commandes `cat first >> third` et `cat second >> third`

## 5.
-----
On utilise simplement la commande `grep "Retirer" third` qui va nous renvoyer le numéro
de la ligne où se trouve "Retirer"

## 6.
-----
On utilise la commande `cp` suivie de l'option `-r` pour indique qu'on copie un dossier
soit `cp -r my_dir my_dir_2`

## 7.
-----
On utilise la commande `rm` suivie de l'option `-r` soit `rm -r my_dir` pour supprimer
tous le dossier `my_dir` de manière récursive
