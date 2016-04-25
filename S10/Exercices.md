# Semaine 10 : Exercices
========================
Rappel : Un signal est une sorte de message qu'un processus peut envoyer à un autre.
Par exemple SIGINT qui intervient quand on utilise CTRL+C. Il y a un traitement
par défaut à chaque signal mais on peut redéfinir ce traitement à l'aide de l'appel
signal(3) et d'un handler. Dès qu'on interceptera ce signal, c'est le handler qui
s'exécutera.
### 1.
Voir code.

### 2.
On ne pourrait pas couper le processus si KILL et SIGINT étaient ignorés.

### 3.
N.B. : Si CTRL+C est ignoré, ppur terminer le processus il faut trouver le pid
du processus dans le top et faire kill numéro de processus.

### 4.
.

### 5.
.

### 6.
Le père dès qu'il reçoit le SIGCHLD sait que son processus fils est finit et donc
peut répondre à wait.

### 7.
Il y a une queue qui stocke tous les signaux reçuc et va donc les exécuter dans
l'ordre.

### 8.
On stocke errno avant l'exécution puis on la remet à la fin. Il n'y a pas d'autres
moyen.
    int err = errno;
    //
    //
    errno = err;

### 9.
Oui, on peut fermer un sémaphore dans le même processus qu'on l'a crée

### 10.
Quand on fait un fork le fils hérite de tous les fd du père. Donc si le père ferme
un fd, le fils ne sait plus y accéder. Si on change les permissions, cela modifie
les permissions pour le père mais pas pour le fils (il doit fermer et rouvrir le
fichier MAIS A VERIFIER). Idem dans l'autre sens. Si on fait unlink ça supprime
le fichier quand tous les processus qui utilisaient le fichier quittent aussi.

### 11.
