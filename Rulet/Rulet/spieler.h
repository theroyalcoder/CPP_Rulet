#pragma once
#include <iostream>

class spieler
{
public:
	spieler();
	~spieler();

	void _set_einsatz(int _einsatz);
	int _get_einsatz();
	void _set_vermoegen(int _vermoegen);
	int _get_vermoegen();
	int _get_zahl_gesetzt();
	void _set_zahl_gesetzt(int _zahl_gesetzt);

private:
	int vermoegen;
	int einsatz;
	int zahl_gesetzt;
	
};

