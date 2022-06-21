#include<stdio.h>
#include<stdlib.h>
#include<omp.h>

int main (int argc, char const *argv[]){

int n=65636;
float *X =(float*)malloc(sizeof(float)*n); //allocation dynamique du tablau A
int i;
float sum;

 for(i=0;i<n;i++){     // remplissage du tableau
 X[i] = i;
 }
 printf("le tableau X etant trop long ne peux donc pas etre affichE ICI. \nIl est tou de meme replir de la facon suivante ;\n X[N] = N \n");


    #pragma omp parallel  num_threads(10)  // CREATION DE 5 thread pour la paralelisation du programme.
for(i=0;i<n;i++){
    sum += X[i];

    }

 printf("la sommme du tableau est: %f\n", sum);
    return 0;

}
