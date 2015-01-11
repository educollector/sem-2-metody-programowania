// cw_2_2dodawanieTablic2D.cpp : Defines the entry point for the console application.
//Napisać program, w którym:
// zdefiniowane zostaną dwie dynamiczne tablice dwuwymiarowe,
// zrelizowane zostanie dodawanie macierzy (reprezentowanych przez zdefiniowane tablice)
// zwolniona zostanie pamięć zajmowana przez tablice
// Cw_2_2_dwie dynamiczne tablice dwuwymiarowe.cpp : Defines the entry point for the console application.

#include "stdafx.h"
#include <iosfwd>
#include "stdafx.h"
#include <iostream>
#include <cstdio>
#include <ctime> 
#include <cmath> 
#include <stdio.h>      /* printf, NULL */
#include <stdlib.h>     /* srand, rand */
#include <time.h>       /* time */

using namespace std;


int _tmain(int argc, _TCHAR* argv[])
{
	int lbw=0;
	int lbk=0;
	cout<<"Podaj liczbe wierszy i kolumn\n";
	cin>>lbw>>lbk;

	float**a=new float*[lbw];
	//*a wskazni do tablicy o lbw elementach, ktore sa wskaznikami (float* )


	for(int i=0; i<lbw; i++)
		a[i]= new float[lbk];
		//a[i] zawiera wskaznik do tablicy o lbk elementach typu float

	//druga tablica
	
	cout<<"wpisz wartosci tablicy A\n";
	for(int i=0; i<lbw; i++)
	{
		for(int j=0; j<lbk; j++)
		{
			cin>>a[i][j];
		}
	}
	cout<<"wartosci tablicy A\n";
	for(int i=0; i<lbw; i++)
	{
		for(int j=0; j<lbk; j++)
		{
			cout<<a[i][j];
		}
	}
		//cout<<a[0][0]<<" ";
		//cout<<a[0][1]<<" ";
		//cout<<a[0][2]<<endl;
		//cout<<a[1][0]<<" ";
		//cout<<a[1][1]<<" ";
		//cout<<a[1][2]<<" ";

	float**b=new float*[lbw];
	//*b wskazni do tablicy o lbw elementach, ktore sa wskaznikami (float* )


	for(int i=0; i<lbw; i++)
		b[i]= new float[lbk];
		//b[i] zawiera wskaznik do tablicy o lbk elementach typu float

	//druga tablica
	cout<<"\nwpisz wartosci tablicy B\n";
	for(int i=0; i<lbw; i++)
	{
		for(int j=0; j<lbk; j++)
		{
			cin>>b[i][j];
		}
	}
	
	cout<<"wartosci tablicy B\n";
	for(int i=0; i<lbw; i++)
	{
		for(int j=0; j<lbk; j++)
		{
			cout<<b[i][j];
		}
	}

// DODAWANIE 

	float**c=new float*[lbw];
	//*c wskazni do tablicy o lbw elementach, ktore sa wskaznikami (float* )


	for(int i=0; i<lbw; i++)
		c[i]= new float[lbk];
		//c[i] zawiera wskaznik do tablicy o lbk elementach typu float
	for(int i=0; i<lbw; i++)
	{
		for(int j=0; j<lbk; j++)
		{
			c[i][j]=a[i][j]+b[i][j];
		}
	}
	
	cout<<"\n\nwartosci sumy elementow tablicy A i B\n\n";
	for(int i=0; i<lbw; i++)
	{
		for(int j=0; j<lbk; j++)
		{
			cout<<c[i][j];
		}
	}
	cout<<endl<<endl;
	//	//wypisanie tablica
	//cout<<"wypisz wartosci tablicy\n";
	//for(int i=0; i<lbw; i++)
	//{
	//	for(int j=0; j<lbw; j++)
	//	{
	//		
	//		cout<<a[i][j];
	//	}
	//}


	//ZWALNIANIE PAMIECI ---------------
	for(int i=0; i<lbw;i++)
		delete[]a[i];
	delete[]a;//kasuje tablice zawierajaca lbw wskaznikow
	system("pause");
	return 0;
}

//void dzialania(char*opis,float(*fun)(float,float))
//{
//	float a,b;
//	cin>>a>>b;
//	cout<<opis<<(*fun)(a,b);
//}

