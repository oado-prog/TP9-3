#include <exception>
using namespace std;

#include "../include/Climatisation.h"

Climatisation::Climatisation()
{
}

Climatisation::Climatisation(int aOutput_ID)
{
    output_ID=aOutput_ID;
}

int Climatisation::getOutput_ID()
{
	return this->output_ID;
}

void Climatisation::setOutput_ID(int aOutput_ID)
{
	this->output_ID = aOutput_ID;
}

bool Climatisation::getEtat()
{
	return this->_etat;
}

void Climatisation::setEtat(bool aEtat)
{
	this->_etat = aEtat;
}

int Climatisation::activer()
{
	throw "Not yet implemented";
}

int Climatisation::stopper()
{
	throw "Not yet implemented";
}
