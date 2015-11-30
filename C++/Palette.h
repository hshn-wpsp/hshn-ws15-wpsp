#pragma once

#include "SaftKiste.h"

class Palette
{
	static const int AnzKisten = 80;
	int anzKisten = 0;
	SaftKiste* pKisten[AnzKisten];

public:
	Palette();
	~Palette();
	Palette(const Palette& original);
	void Add(const SaftKiste& kiste);
	void Print();
	Palette& operator=(Palette& orig);
};