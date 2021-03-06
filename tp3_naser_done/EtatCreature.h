/*
Fichier: EtatCreature.h
Auteur(s): Philippe Troclet
Date de creation: 30 septembre 2016
Description: Caract�rise l'�tat d'une cr�ature, et l'impact qu'� ce dernier sur la 
                dite cr�ature
*/
#ifndef ETAT_CREATURE_H
#define ETAT_CREATURE_H

#include <iostream>

#include "Creature.h"  
#include "TypeEtat.h"

//d�claration anticip�e n�cessaire � cause des inclusions circulaires
class Creature;

class EtatCreature
{
public:
    EtatCreature(const std::string& nom);
    EtatCreature(const std::string& nom, unsigned int duree);
    ~EtatCreature();

    void appliquerEtat(Creature& creature); //� appliquer sur la cr�ature qui poss�de ce pouvoir
    bool peutAttaquer() const; //d�termine si l'�tat de la cr�ature lui permet d'attaquer
    bool estFini() const; //si vrai, informe la cr�ature qu'elle peut retourner � l'�tat normal

    std::string obtenirNom() const;
    TypeEtat obtenirType() const;

    friend std::ostream& operator<<(std::ostream& o, const EtatCreature& etatCreature);

protected:
	std::string nom_;
	unsigned int duree_;
    TypeEtat type_;
	
};
#endif // !ETAT_CREATURE_H




