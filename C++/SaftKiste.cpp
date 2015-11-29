#include "stdafx.h"
#include "SaftKiste.h"
#include <iostream>


SaftKiste::SaftKiste(Saft sorte, float menge)
{
	for (int i = 0; i < this->AnzFlaschen; i++)
	{
		this->pFlaschen[i] = new Flasche(sorte, menge);
	}
}

SaftKiste::SaftKiste(const SaftKiste& original)
{
	for (int i = 0; i < this->AnzFlaschen; i++)
	{
		this->pFlaschen[i] = new Flasche(*original.pFlaschen[i]);
	}
}

SaftKiste::~SaftKiste()
{
	for (int i = 0; i < this->AnzFlaschen; i++)
	{
		delete this->pFlaschen[i];
	}
}

Flasche* SaftKiste::SaftFlasche(int id)
{
	if (id >= 0 && id < AnzFlaschen)
	{
		return this->pFlaschen[id];
	}
	return NULL;
}

void SaftKiste::SaftFlasche(int id, Saft sorte)
{
	if (id >= 0 && id < AnzFlaschen)
	{
		this->pFlaschen[id]->Inhalt(sorte);
	}
}

void SaftKiste::Print()
{
	std::cout << "SaftKiste<[" << std::endl;
	for (int i = 0; i < this->AnzFlaschen; i++)
	{
		this->pFlaschen[i]->Print();
	}
	std::cout << "]>" << std::endl;
}