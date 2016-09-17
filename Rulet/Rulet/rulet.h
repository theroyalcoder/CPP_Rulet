#pragma once
class Rulet
{
public:
	Rulet();
	~Rulet();

	int _get_zahl();
	void _set_zahl(int _zahl);
	
private:
	int zahl;
};