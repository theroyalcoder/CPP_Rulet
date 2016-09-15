#pragma once
#include<Windows.h>




class GUI
{
public:
	GUI();
	~GUI();

private:
	int fenster_hoehe;
	int fenster_breite;
	HWND hWnd;
};