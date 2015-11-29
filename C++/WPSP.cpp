// WPSP.cpp : Defines the entry point for the console application.
//

#include "stdafx.h"
#include <iostream>

#include "Flasche.h"
#include "SaftKiste.h"
#include "Saft.h"



int _tmain(int argc, _TCHAR* argv[])
{
	int test;


	std::cout << "Mein tolles Programm:" << std::endl;
	
	Flasche* flasche = new Flasche(Saft::Kirsche, 5);
	
	flasche->Print();

	flasche->Inhalt(Saft::Birne);

	flasche->Print();
	std::cout << std::endl;
	Flasche* kopierteFlasche = new Flasche(*flasche);
	kopierteFlasche->Print();
	std::cout << std::endl;
	SaftKiste* kiste = new SaftKiste(Saft::Kirsche, 3.4f);
	kiste->SaftFlasche(2)->FuellMenge(4.1f);
	kiste->Print();
	std::cout << "Kopiert:" << std::endl;
	SaftKiste* kopierteKiste = new SaftKiste(*kiste);
	kopierteKiste->Print();
	std::cout << "und en attribut geänert" << std::endl;
	kopierteKiste->SaftFlasche(5)->FuellMenge(0);
	kiste->Print();
	kopierteKiste->Print();
	std::cin >> test;
	return 0;
}

