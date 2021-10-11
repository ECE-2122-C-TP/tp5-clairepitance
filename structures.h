//
// Created by Claire Pitance  on 06/10/2021.
//

#ifndef TP5_STRUCTURES_H
#define TP5_STRUCTURES_H

typedef struct {
    int num, denum;
}NombreRationnel;

void affichage(NombreRationnel n);
NombreRationnel saisir();
NombreRationnel produit(NombreRationnel n1, NombreRationnel n2);
NombreRationnel addition(NombreRationnel n1, NombreRationnel n2);
int pgdc(NombreRationnel NR);

#endif //TP5_STRUCTURES_H
