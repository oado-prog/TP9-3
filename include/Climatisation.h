#include <exception>
using namespace std;

#ifndef __Climatisation_h__
#define __Climatisation_h__

class Climatisation
{
private:
	int output_ID;

private:
	bool _etat;

public:
	Climatisation();

public:
	Climatisation(int aOutput_ID);

public:
	int getOutput_ID();

public:
	void setOutput_ID(int aOutput_ID);

public:
	bool getEtat();

public:
	void setEtat(bool aEtat);

	/// <summary>
	/// La valeur de retour est un code d'erreur.
	/// </summary>
public:
	int activer();

	/// <summary>
	/// La valeur de retour est un code d'erreur.
	/// </summary>
public:
	int stopper();
};

#endif