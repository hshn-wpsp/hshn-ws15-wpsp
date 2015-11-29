#include "stdafx.h"
#include "Flasche.h"

#include <stdio.h>
#include <iostream>

std::string Flasche::PrintSorte()
{
	switch (sorte)
	{
	case Saft::Banane:
		return "Banane";
	case Saft::Kirsche:
		return "Kirsche";
	case Saft::Birne:
		return "Birne";
	case Saft::Multi:
		return "Multi";
	default:
		break;
	}
}

Flasche::Flasche(Saft sorte, float menge)
{
	this->sorte = sorte;
	this->fuellMenge = menge;
}

Flasche::Flasche(Flasche& original)
{
	this->fuellMenge = original.fuellMenge;
	this->sorte = original.sorte;
}

Saft Flasche::Inhalt()
{
	return sorte;
}

void Flasche::Inhalt(Saft sorte){
	this->sorte = sorte;
}

float Flasche::FuellMenge(){
	return fuellMenge;
}

void Flasche::FuellMenge(float menge){
	this->fuellMenge = menge;
}

void Flasche::Print()
{
	std::cout << "Flasche< Sorte: " << PrintSorte() << ", Menge: " << fuellMenge << ">" << std::endl;
}