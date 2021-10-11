//
// Created by Claire Pitance  on 06/10/2021.
//
#include <stdio.h>
#include "tableaux.h"



//Exercice 2

//on écrit d'abord une fonction pour remplir le tableau

int remplirTableau(int tableauEntiers[]){
    int N =0, i=0;
    printf("Combien d'entier voulez-vous insérer?\n");
    scanf("%d", &N);
    if (N > NB_ELEMENT_MAXI){
        printf("ERREUR : Le tableau peut uniquement contenir %d éléments.", NB_ELEMENT_MAXI);
    }
    printf("Entrez les éléments un à un :\n");
    for (i=0; i<N; i++){
        scanf("%d", &tableauEntiers[i]);
    }
    return N;
}



int plusGrandEntierTableau(int tableauEntiers[], int N){
    int i = 0, valeurMax = tableauEntiers[0]; // on initie à l'indice 0 donc on compare ensuite avec l'indice 1
    for (i=1; i<N; i++){
        if (tableauEntiers[i]>valeurMax){ //on compare
            valeurMax = tableauEntiers[i];
        }
    }
    return valeurMax;
}




