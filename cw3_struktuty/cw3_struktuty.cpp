/*Zdefiniowac:
1. strukture przechowujaca nastepujace informacje o pracowniku:
2. strukture przechowujaca nastepujace informacje o towarze:
3. strukture przechowujaca nastepujace informacje o nagraniu:*/

#include "stdafx.h"
#include "stdafx.h"
#include <iostream>
#include <cstdio>
#include <string>
#include <time.h>

using namespace std;

struct Pracownik
{
	string nazwisko;
	int rok_urodzenia;
	int rok_zatrudnienia;
};

int _tmain(int argc, _TCHAR* argv[])
{
	int aktRok=2013;
	int n=0;
	int sprawdzacz=0;

	Pracownik *tablicaPracownikow;
	cout<<"program pozwalajacy na wczytanie i wyswietlenie danych o pracowniku\n";
	do
	{
		cout<<"Wprowadz dane pracownikow\nPodaj liczbe pracownikow (max 10): \n";
		cin>>n;
	}while(n>10);

	tablicaPracownikow = new Pracownik[n];

	for(int i=0; i<n; i++)
	{
		cout<<"Podaj Nazwisko "<<i+1<<"-go pracownika: ";
		cin>>tablicaPracownikow[i].nazwisko;
		cout<<"Podaj rok urodzenia "<<i+1<<"-go pracownika: ";
		cin>>tablicaPracownikow[i].rok_urodzenia;
		cout<<"Podaj rok zatrudnienia "<<i+1<<"-go pracownika: ";
		cin>>tablicaPracownikow[i].rok_zatrudnienia;
	}
	//wypisz
	cout<<"Dane pracownikow: \n";
	for(int j=0; j<n; j++)
	{
		cout<<"Pracownik nr "<<j+1<<endl;
		cout<<tablicaPracownikow[j].nazwisko<<endl;
		cout<<tablicaPracownikow[j].rok_urodzenia<<endl;
		cout<<tablicaPracownikow[j].rok_zatrudnienia<<endl;
	}

	//licz ilu pracownikow pracuje conajmniej 5 lat i nie ma 30 lat
	cout<<"\nPracownicy pracujacy conajmniej 5 lat i nie majacy 30 lat:\n";
	for(int k=0; k<n; k++)
	{
		if(((aktRok-tablicaPracownikow[k].rok_urodzenia)<30) && ((aktRok - tablicaPracownikow[k].rok_zatrudnienia)>=5))
		{
			cout<<endl<<endl<<"Pracownik nr "<<k+1<<"  "<<tablicaPracownikow[k].nazwisko;
			sprawdzacz++;
		}
	}
	cout<<endl<<"Jest "<<sprawdzacz<<" takich pracownikows\n";

	delete []tablicaPracownikow;
	system("pause");
	return 0;
}

