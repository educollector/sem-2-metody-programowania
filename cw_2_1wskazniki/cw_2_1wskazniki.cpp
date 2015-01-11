//Napisać i uruchomić program: 
//a. wyznaczający sumę co drugich elementów tablicy a, 
//b. wyznaczający średnią wartość elementów tablicy a oraz umieszczający elementy o wartości 
//mniejszej od średniej po lewej stronie tablicy b, a elementy niemniejsze od średniej - po prawej 
//stronie tablicy b.

#include "stdafx.h"
#include "stdafx.h"
#include <iostream>
#include <cstdio>
#include <ctime> 
#include <math.h> 

using namespace std;

int* wypelnijLosowo(int rozmiar);
void wypiszTablice(int tablica[], int rozmiar);
int sumaCoDrugichEl(int tablica[], int rozmiar);
int srednia(int tablica[], int rozmiar);
int partition(int tablica[], int p, int r);
void quicksort(int tablica[], int p, int r);


int _tmain(int argc, _TCHAR* argv[])
{
	int* tab;
	int liczbaElementow;
    cout<<"Podaj liczbe elementow"<<endl;
    cin>>liczbaElementow;

	tab=wypelnijLosowo(liczbaElementow);

	wypiszTablice(tab, liczbaElementow);
	cout<<"\n\nSUMA wartosci co drugich elementow tablicy: "<<sumaCoDrugichEl(tab,liczbaElementow)<<endl;
	cout<<"\n\nSrednia wartosc elementow tablicy: "<<srednia(tab,liczbaElementow)<<endl<<endl;
		cout<<"adres tab[5]: "<<&tab[5]<<endl;
		cout<<"wartosc tab[5]: "<<tab[5]<<endl;
	//sortowanie
	quicksort(tab,0,liczbaElementow); // wywolanie funkcji sortujacej
 
	for (int i = 0; i <liczbaElementow; i++) // wypisanie posortowanej tablicy
	cout << "tablica[" << i << "] = " << tab[i] << endl; 



	delete []tab;
	system ("pause");
	return 0;
}

//*******************************
int* wypelnijLosowo(int rozmiar)
{
	srand(time(0));//inicjalizacja generatora liczb pseudolosowych

	int* tablica = new int[rozmiar];
	int a1=7;
	int an=198;
	
	for(int i=0; i<rozmiar; i++)
	{
			tablica[i]=a1+(rand()%(an-a1));
	}
	return tablica;
}


void wypiszTablice(int tablica[], int rozmiar)
{   
    cout<<"Wypisuje tablice"<<endl;
    for(int i =0; i<rozmiar; i++)
    {
        
        cout<<i<<")  "<<tablica[i]<<endl;   
    }
}

int srednia(int tablica[], int rozmiar)
{
    int suma=0;
    int average=0;
    for(int j=0; j<rozmiar; j++)
    {
        suma+=tablica[j];
    }   
   average=suma/rozmiar;
    return average;
}

int sumaCoDrugichEl(int tablica[], int rozmiar)
{
	int sumaCo2=0;
	cout<<endl<<"wartosci co drugich elementow: ";
	for(int k=0; k<rozmiar; k+=2)
	{
		sumaCo2+=tablica[k];
		cout<<endl<<tablica[k]<<" ";
	}
	return sumaCo2;
}

 
int partition(int tablica[], int p, int r) // dzielimy tablice na dwie czesci, w pierwszej wszystkie liczby sa mniejsze badz rowne x, w drugiej wieksze lub rowne od x
{
	int x = tablica[p]; // obieramy x
	int i = p, j = r-1, w; // i, j - indeksy w tabeli !!! dodano zamiat "r" "r-1" bo inaczej wstawialo zamiat najwiekszej wartosci z tablicy, cos z pierwszej komorki pamieci poza tablica!!!
	while (true) // petla nieskonczona - wychodzimy z niej tylko przez return j
	{
			while (tablica[j] > x) // dopoki elementy sa wieksze od x
				j--;
			while (tablica[i] < x) // dopoki elementy sa mniejsze od x
				i++;
			if (i < j) // zamieniamy miejscami gdy i < j
			{
				w = tablica[i];
				*(tablica+i) = *(tablica+j);//TO SAMO CO:  tablica[i] = tablica[j];
				tablica[j] = w;
				i++;
				j--;
			}
		else // gdy i >= j zwracamy j jako punkt podzialu tablicy
			return j;
	}
}
 
void quicksort(int tablica[], int p, int r) // sortowanie szybkie
{
	int q;
	if (p < r)
	{  
		q = partition(tablica,p,r); // dzielimy tablice na dwie czesci; q oznacza punkt podzialu
		quicksort(tablica, p, q); // wywolujemy rekurencyjnie quicksort dla pierwszej czesci tablicy
		quicksort(tablica, q+1, r); // wywolujemy rekurencyjnie quicksort dla drugiej czesci tablicy
	}
}