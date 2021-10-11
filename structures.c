//
// Created by Claire Pitance  on 06/10/2021.
//

#include "structures.h"
#include "exercices.h"
#include <stdio.h>

// EXERCICE 1

//on créer une fonction d'affichage

void affichage(NombreRationnel n){
    printf("%d / %d\n", n.num, n.denum);
    return;
}

// on créer une fonction saisie

NombreRationnel saisir(){
    NombreRationnel n;
    printf("saisissez le numérateuer\n");
    scanf("%d", &n.num);
    printf("saisissez le dénominateur\n");
    scanf("%d", &n.denum);
    return n;  //on cache num et denum dans n
}

//on créer une fonction de multiplication

NombreRationnel produit(NombreRationnel n1, NombreRationnel n2){
    NombreRationnel n;  //on recache nos num et denum
    n.num = n1.num * n2.num;
    n.denum = n1.denum * n2.denum;
    return n;
}

//on créer une fonction d'addition

NombreRationnel addition(NombreRationnel n1, NombreRationnel n2){
    NombreRationnel n;  //on recache nos num et denum
    n.num = n1.num * n2.denum + n2.num * n1.denum;
    n.denum = n1.denum * n2.denum;
    return n;
}

// on créer une fonction qui calcul le plus grand dénominateur commun

int pgdc(NombreRationnel NR){
    int reste, c, a,b;
    a = NR.num;
    b = NR.denum;
    if(a<b){  //on veut que a soit le plus grand
        c = a;
        a = b;
        b = c;
    }
    reste = a%b;
    while (reste != 0){
        a = b;
        b = reste;
        reste = a%b; // le reste est le plus grand dénominateur commun
    }
    return b;
}

