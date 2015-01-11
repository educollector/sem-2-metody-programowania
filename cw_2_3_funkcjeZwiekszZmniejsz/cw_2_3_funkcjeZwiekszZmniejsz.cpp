// cw_2_3_funkcjeZwiekszZmniejsz.cpp : Defines the entry point for the console application.
//
//Napisać program, w którym:
// zostaną zdefiniowane funkcje zwieksz(float x, float d), zmniejsz(float x, float d) wykonujące, 
//odpowiednio, zwiększenie i zmniejszenie wartości x o wartość d i zwracające zmienioną wartosć
// zdefiniowana zostanie funkcja dzialanie() wywołująca (za pomocą wskaźnika) funkcję zwieksz() 
//lub zmniejsz(). Wskaźnik do funkcji zwieksz() lub zmniejsz() (użytkownik dokonuje wyboru 
//działania) jest przekazywany jako argument do funkcji dzialanie().
#include "stdafx.h"
#include <iosfwd>
#include "stdafx.h"
#include <iostream>
#include <cstdio> 
#include <cmath> 
#include <stdio.h>      /* printf, NULL */
#include <stdlib.h>     /* srand, rand */

float zwieksz(float x, float d);
float zmniejsz(float x, float d);

float dzialanie(   float(*mojaFunkcja)(float, float) );


using namespace std;
int _tmain(int argc, _TCHAR* argv[])
{
	int wyborUsera;

	float(*jakaFunkcjeWybralUser)(float, float) = zwieksz;//deklaracja wskaznika na funkcj

	cout<<"za chwile podasz awrtosc x i wartosc d\njesli x ma byc ZWIEKSZONY o d wybierz 1\njesli x ma byc ZMNIEJSZONY o d wybierz 2\n";
	cin>>wyborUsera;

	switch(wyborUsera)
	{
	case 1:
		jakaFunkcjeWybralUser = zwieksz;
		cout<<"wybrales funkcje ZWIEKSZ\n";
		break;

	case 2:

		jakaFunkcjeWybralUser = zmniejsz;
		cout<<"wybrales funkcje ZMNIEJSZ\n";
		break;

	default:
		cout<<"error" ;
	}

	cout<<"wynik: "<<dzialanie(jakaFunkcjeWybralUser)<<endl; //funkcja dzialanie wywoluje funkcje zmniejsz lub zwieksz i wypisuje wynik 
	
	
	system("pause");
	return 0;
}
//***********************************************************
float zwieksz(float x, float d)
{
	float wynik;
	wynik = x+d;
	return wynik;

}

float zmniejsz(float x, float d)
{
	
	float wynik;
	wynik = x-d;
	return wynik;
}

float dzialanie(   float(*mojaFunkcja)(float, float) )
{
	float x; 
	float d;
	cout<<"Podaj x i d\n\n";
	cin>>x>>d;
	
	return mojaFunkcja(x,d); // wywolanie funkcji zmniejsz lub zwieksz w zal od wyboru usera
	
}
