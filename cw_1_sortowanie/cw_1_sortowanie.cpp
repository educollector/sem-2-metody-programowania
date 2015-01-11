// cw_1_sortowanie.cpp : Defines the entry point for the console application.
//

#include "stdafx.h"
#include "stdafx.h"
#include <iostream>
#include <cstdio>
#include <time.h> 
#include <math.h> 

using namespace std;
void quick(int a[], int l, int p);

int _tmain(int argc, _TCHAR* argv[])
{
	int a[1000];
	int n;
	int d;
	int g;
	cout<<"Podaj n :";
	cin>>n;
	cout<<"Podaj d oraz g :";
	cin>>d>>g;

	//generuj(a,n,d,g);
	//wypisz(a,n);
	unsigned int start=clock();
	quick(a,0,n-1);
	unsigned int stop=clock();
	cout<<"czas sortowania: "<<stop-start<<endl;
	//wypisz(a,n);


	system ("pasue");
	return 0;
}


//*******************************
/*szybkosc dzialania funkcji rekurencyjnej zalezy od parametu x algorytmu i od stopnia uporzadkowania danych zawartych w tablicy a
przy  niewlasciwym doborze x przestaje dzialac szybko o a liczba wywolan rekurencyjnych rosnie na tyle szybko, ze nastepuje przepelnienie storu*/
void quick(int a[], int l, int p)
{
	int i;
	int j; 
	int x;
	int w;
	i=l;
	j=p;
	x=a[l];
	//x=a[(l+p)/2];
	do
	{
		while(a[i]<x) i++;
		while(a[j]>x) j--;
		if(i <=j)
		{
			w=a[i];
			a[i] = a[j];
			a[j]=w;
			i++;
			j--;
		}
	}while(i<=j);
	if(l<j) quick(a,l,j);
	if(i<p) quick (a,i,p);

	system("pause");
}