#ifndef POUVOIRPOISON_H
#define POUVOIRPOISON_H

#include "Pouvoir.h"
#include "EtatEmpoisonne.h"

class PouvoirPoison : public Pouvoir {

public :

	PouvoirPoison(const std::string& nom,
		unsigned int nombreDeDegat, unsigned int energieNecessaire);
	
	PouvoirPoison(const std::string& nom,
		unsigned int nombreDeDegat, unsigned int energieNecessaire, int duree);

	void appliquerEffetOffensif(Creature& creatureEnnemie) const;

	friend std::ostream& operator<<(std::ostream& os, const PouvoirPoison& poison);

	

private :

	int duree_;

};

#endif