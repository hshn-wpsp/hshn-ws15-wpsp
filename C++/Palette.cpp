#include "stdafx.h"
#include "Palette.h"
#include <iostream>


Palette::~Palette()
{
	for (int i = 0; i < anzKisten; i++)
	{
		delete pKisten[i];
	}
}

Palette::Palette(const Palette& original)
{
	for (int i = 0; i < anzKisten; i++)
	{
		pKisten[i] = new SaftKiste(*original.pKisten[i]);
	}
}

void Palette::Add(const SaftKiste& kiste)
{
	if (anzKisten < AnzKisten)
	{
		SaftKiste lKiste = kiste;
		pKisten[anzKisten] = new SaftKiste(lKiste);
		anzKisten++;
	}
}

void Palette::Print()
{
	std::cout << "Palette<[" << std::endl;
	for (int i = 0; i < this->anzKisten; i++)
	{
		this->pKisten[i]->Print();
	}
	std::cout << "]>" << std::endl;
}