#pragma once

#include "Flasche.h"
#include "Saft.h"

class SaftKiste
{
	static const int AnzFlaschen{ 6 };
	Flasche* pFlaschen[AnzFlaschen];
public:
	SaftKiste(Saft sorte, float menge);
	SaftKiste(const SaftKiste& original);
	~SaftKiste();
	Flasche* SaftFlasche(int id);
	void SaftFlasche(int id, Saft sorte);
	void Print();
};
