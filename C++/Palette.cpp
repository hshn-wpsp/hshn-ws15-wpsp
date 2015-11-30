#include "stdafx.h"
#include "Palette.h"
#include <iostream>

Palette::Palette()
{

}

Palette::~Palette()
{
	for (int i = 0; i < anzKisten; i++)
	{
		delete pKisten[i];
	}
}

Palette::Palette(const Palette& original)
{
	this->anzKisten = original.anzKisten;

	for (int i = 0; i < anzKisten; i++)
	{
		pKisten[i] = new SaftKiste(*original.pKisten[i]);
	}
}

void Palette::Add(const SaftKiste& kiste)
{
	if (anzKisten < AnzKisten)
	{
		std::cout << anzKisten << std::endl;
		SaftKiste lKiste = kiste;
		pKisten[anzKisten] = new SaftKiste(lKiste);
		anzKisten++;
		std::cout << anzKisten << std::endl;
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

Palette& Palette::operator=(Palette& orig)
{	
	// 1.: alten Inhalt aufräumen, wie Destruktor
	for (int i = 0; i < anzKisten; i++)
		delete(pKisten[i]);
	// 2.: Inhalt des 'orig' kopieren, wie copy constructor

	anzKisten = orig.anzKisten;
	for (int i = 0; i < anzKisten; i++)
	{
		pKisten[i] = new SaftKiste(*orig.pKisten[i]);
	}
	// 3.: (Referenz auf) neues Objekt zurückgeben
	return *this;
}