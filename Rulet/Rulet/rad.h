#pragma once
#include<cstdlib>

class  RAD
{
public:
	RAD();
	~RAD();

	int _get_GewinnerZahl();
	void _set_GewinnerZahl(int _GewinnerZahl);
	void _drehen();
private:
	int position[37][37];
	int GewinnerZahl;
	
};