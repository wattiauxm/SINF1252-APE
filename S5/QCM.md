# Semaine 5 : Questions à Choix Multiples
=========================================
### 1. Pointeurs en aseembleur
------------------------------
To do.

### 2. Pointeurs et tableaux
----------------------------
Après exécution de `ptr=&(a[0]);`, la seule des instructions qui affiche la suite
de chiffres `2 4 3 8` est :
    `printf("%d %d %d %d\n",*ptr,*(ptr+1),*(ptr+2),*(ptr+*(ptr+3)));`

### 3. Traitement de argv
-------------------------
    char **ptr;
    int i=0;
    ptr=argv;
    while(i<argc) {
      printf("%d %p %s\n",i,&(*ptr),*ptr);
      i++;
      ptr++;
    }

### 4. Pointeurs et tableaux à deux dimensions
----------------------------------------------int
    *ptr;

    ptr=&(m[0][0]);
    printf("%p %d %d %d\n",ptr, *(ptr+4*1+2), *(ptr+4*0+5), *(ptr+2*4+2));

### 5. Variable `errno`
-----------------------
Seula la fonction `getpid(2)` ne modifie pas la variable `errno` car un appel
à `getpid(2)` réussit toujours comme indiqué dans sa manpage.

### 6. Utilisation de `pthread_create(3)`
-----------------------------------------
    void * f( void * param) {
     // incomplet
     return NULL;
    }

    int main (int argc, char *argv[])  {

      pthread_t t;
      int err;
      char *s;
      err=pthread_create(&t,NULL,&(f),(void *) s);
    }

### 7. Passage d'arguments à un thread
--------------------------------------
    void *mythread(void * param) {
      Fraction_t *f=(Fraction_t *) param;
      float *r=(float *)malloc(sizeof(float));
      *r=(float) f->num/ (float) f->denum;
      return((void *) r);
     }

    int main (int argc, char *argv[])  {

     pthread_t t;
     Fraction_t f;
     f.num=1;
     f.denum=3;
     float *r;
     int err;

     err=pthread_create(&t,NULL,&mythread,&(f));

     err=pthread_join(t,(void **) &r);

    }
