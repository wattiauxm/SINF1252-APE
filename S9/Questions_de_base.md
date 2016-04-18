# Semaine 9 : Questions de bases
================================
### 1.
Les bits de permission permettent d'accorder les droits en lecture, écriture et
exécution. Lors d'un appel à chmod, on a trois colonnes représantant les droits
(rwx rwx rwx). La première colonne sont les permissions de l'utilisateur du fichier,
la deuxième celle-du groupe auquel le fichier appartient et la troisième tous les
utilisateurs.

### 2.
Débile

### 3.
    $ mkdir test
    $ chmod 740 test

### 4.
Les permissions du torisième groupe `rwx` sont `111`
N.B. : Pour pouvoir accéder à un répertoire, on doit pouvoir l'exécuter car sinon
on ne sait plus accéder aux inodes.

### 5.
Dans le kernel de linux, on a un fichier qui va stocker tous les files descriptors
des processus en cours. Donc lsof(3) va regarder le pid du processus et va ensuite
aller chercher la liste dans le fichier qui stocke les files descriptors.

### 6.
L'astuce est de savoir que les files descriptors sont attribués de manière
séquentielle. Donc on retourne le file descriptor d'un nouveau fichier qu'on
ouvre avec open et on connaitra le nombre de files decriptors qu'il y avait déjà.

### 7.
Cela va marcher et on aura deux files descriptors différents séquentiels et un
pourra lire et écrire et l'autre seulement lire. On aura donc pas d'erreurs.

### Remarques.
N.B. : pipe(int fd[2]) --> [fd0][fd1] ou fd0 représente la lecture et fd1 l'écriture.
Quand on utilise la commande `echo "a" > foo.txt` cela imprime sur la sortie standard
le caractère "a".Ce que cela fait en fait est que cela crée un pipe qui va se connecter
sur la sortie du fichier.
N.B. : LE chevron `>` signigie qu'on modifie le `output` standard de echo et le chevron `<`
modifie le `intput` standard de sort.
N.B. : Le pipe est la combinaisondes deux redirections. Par exemple, dans la commande
`ls -l | less`, on redirige le `output` standard de `ls` vers le `input` standard
de `less`.

### 8.
//On va utiliser `fork`, `execve`, `pipe` et `freopen`.
On va utiliser tout d'abord un `freopen` pour rediriger le stdout vers le fichier
`test.txt` (`freopen("text.txt",RDWR,stdout)`). Ensuite on va utiliser `execve`
pour exécuter le comande echo 1252.

### 9.
On modifier le stdin et le stdout à l'aide de deux appels à freopen.

### 10.
On fait un `fork` qui crée un processus sans rien dedans. Ensuite on fait un `pipe`
pour lier les deux processus. Puis on fait finalement un `execve`.

### 11.
On utilise premièrement un freopen pour rediriger la sortie standard sur l'entrée
standard de cat et ensuite on redirige la sortie standard de cat vers l'entrée standard
de grep avec un freopen.

### 11.
On utilise simplement un `freopen` mais cette fois-ci avec `stderr` et plus `stdout`.

### 12.
On sait le distinguer car l'erreur ENOSPC dit qu'il n'y a plus d'espace.

### 13.
Les opérations io prennent beaucoup de temps par rapport à tout ce qui est calcul
car lesdisques durs sont oas rapide. Pour éviter de plomber les performances, les disques
durs n'exéctuenet pas ifdrectement ce qu'on demande mais les mettent dans un buffer
et quand on a fini les calculs à ce moment il utilise stdout. Et sync lui, force
l'écriture sans attendre.

### 14.
Quand on utilise write, on peut choisir le buffer et au plus il est petit au plus souvent
le programme fera des io et au plus ce sera lent. Car s'il est petit, chaque fois
qu'il est rempli il es tobligé d'écrire pour vider le buffer.
