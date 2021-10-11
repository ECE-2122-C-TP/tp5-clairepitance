//
// Created by Claire Pitance  on 06/10/2021.
//
#include <stdio.h>
#include "exercices.h"
#include "structures.h"
#include "tableaux.h"

void exercice1(){
    NombreRationnel nr1 = {0, 1};
    NombreRationnel nr2 = {0,1};
    NombreRationnel NR = {0, 1};
    printf("saisissez un premier nombre rationnel (pour la fonction addition et multiplication)\n");
    nr1=saisir();
    printf("saisissez un second nombre rationnel(pour la fonction addition et multiplication)\n");
    nr2=saisir();
    printf("saisissez un nombre rationnel pour calculer le pgcd\n");
    NR=saisir();
    printf("on test notre fonction affichage pour le premier nombre rationnel \n");
    affichage(nr1);
    printf("on affiche le produit pour les deux nombres rationnels\n");
    affichage( produit(nr1, nr2));
    printf("on affiche l'addition pour les deux nombres rationnels\n");
    affichage (addition( nr1, nr2));
    printf("le pgcd du nombre rationnel est : \n %d", pgdc( NR));
    return;
}


void exercice2(){
    int tableauEntiers[NB_ELEMENT_MAXI];
    int N=0, valeurMax = 0;
    N = remplirTableau(tableauEntiers);
    valeurMax = plusGrandEntierTableau(tableauEntiers, N);
    printf("le plus grand entier du tableau est %d", valeurMax);

    return;
}


// EXERCICE3

#define NB_LIGNES_MAX 4
#define NB_COLONNES_MAX 3
#define NB_MAX 12
void exercice3(){
    int i=0, j=0;
    int monTableau3x4[NB_LIGNES_MAX][NB_COLONNES_MAX];
    int monTableau1[NB_MAX];
    int k=0;
    for (i=0; i<NB_LIGNES_MAX; i++){
        for (j=0; j<NB_COLONNES_MAX; j++){
            int n=0;
            monTableau3x4[i][j] = 0;
            printf("remplissez votre tableau case par case : %d, %d\n>", i+1, j+1);
            scanf("%d", &n);
            monTableau3x4[i][j] = n;
            monTableau1[k] = monTableau3x4[i][j] ; // on transforme notre tableau à 2 dim à une dim
            k = k+1;
        }
    }
    for(k=0; k<12; k++){
        printf(" %d ", monTableau1[k]);
    }
    return;
}

