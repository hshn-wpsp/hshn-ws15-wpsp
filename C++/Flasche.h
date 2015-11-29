#pragma once

#include "Saft.h"
#include <string>

class Flasche
{
	Saft sorte;
	float fuellMenge;
	std::string PrintSorte();
public:
	Flasche(Saft sorte, float menge);
	Flasche(Flasche& original);
	Saft Inhalt();
	void Inhalt(Saft sorte);
	float FuellMenge();
	void FuellMenge(float menge);
	void Print();

};

