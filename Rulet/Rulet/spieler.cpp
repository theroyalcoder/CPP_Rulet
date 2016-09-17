#include <iostream>
#include "spieler.h"



spieler::spieler()
{
}


spieler::~spieler()
{
}

void spieler::_set_einsatz(int _einsatz)
{
	if (!_einsatz > _get_vermoegen())
	{
		einsatz = _einsatz;
	}
	else
	{
		einsatz = 0; // Nicht genügend Vermögen
	}
	
}

int spieler::_get_einsatz()
{
	return einsatz;
}

void spieler::_set_vermoegen(int _vermoegen)
{
	vermoegen = _vermoegen;
}

int spieler::_get_vermoegen()
{
	return vermoegen;
}

int spieler::_get_zahl_gesetzt()
{
	return zahl_gesetzt;
}

void spieler::_set_zahl_gesetzt(int _zahl_gesetzt)
{
	zahl_gesetzt = _zahl_gesetzt;
}
