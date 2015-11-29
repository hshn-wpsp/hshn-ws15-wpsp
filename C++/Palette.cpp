#include "stdafx.h"
#include "Palette.h"



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

Palette* Palette::getBananenTemplate()
{
	if (bananenTemplate == NULL){
		bananenTemplate = new Palette();
		for (int i = 0; i < 10; i++)
		{
			bananenTemplate->Add(*new SaftKiste(Saft::Banane, 1));
		}
	}
	return bananenTemplate;
}