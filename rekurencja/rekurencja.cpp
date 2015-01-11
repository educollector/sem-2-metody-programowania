#include "stdafx.h"
#include <iostream>
#include <cstdio>
using namespace std;

long long silniaRef(int n);
long long silniaIter(int n);
int nwdRek(int x,int y);
int nwdIter(int x,int y);
long long fibRek(int n);
long long fibIter(int n);

int _tmain(int argc, _TCHAR* argv[])
{
	int wybor=0;
	int n=0;
	int x=0;
	int y=0;
	do
	{
		cout<<"Wybierz wartosc i metode:\n";
		cout<<"1-Silnia (rekurencja)\n2-Silnia (iteracyjnie)\n3-NWD (rekurencja)\n4-NWD (iteracyjnie\n";
		cout<<"5-Fibonacci (rekurencyjnie)\n6-Fibonacci (iteracyjnie)\n";
		cin>>wybor;
	}while(wybor!=1 && wybor!=2 && wybor!=3 && wybor!=4 && wybor!=5 && wybor!=6);
	switch(wybor)
	{
		case 1: 
			cout<<"Podaj wartosc elementu, dla ktorego liczysz silnie:\n";
			cin>>n;
			cout<<"Wynik: "<<n<<"! = "<<silniaRef(n)<<endl;
		break;
 
		case 2: 
			cout<<"Podaj wartosc elementu, dla ktorego liczysz silnie:\n";
			cin>>n;
			cout<<"Wynik: "<<n<<"! = "<<silniaIter(n)<<endl;
		break;
 
		case 3: 
			cout<<"Podaj wartosc elementow, dla ktorych szukasz NWD:\n";
			cin>>x;
			cin>>y;
			cout<<"Wynik: NWD ("<<x<<" , "<<y<<") = "<<nwdRek(x,y)<<endl;
		break;
			
		case 4: 
			cout<<"Podaj wartosc elementow, dla ktorych szukasz NWD:\n";
			cin>>x;
			cin>>y;
			cout<<"Wynik: NWD ("<<x<<" , "<<y<<") = "<<nwdIter(x,y)<<endl;
		break;
			
		case 5: 
			cout<<"Podaj, ktory element ciagu Fibonacciego ma zostac obliczony:\n";
			cin>>n;
			cout<<"Wynik: "<<n<<"element ciagu "<<fibRek(n)<<endl;
		break;
			
		case 6: 
			cout<<"Podaj, ktory element ciagu Fibonacciego ma zostac obliczony:\n";
			cin>>n;
			cout<<"Wynik: "<<n<<"element ciagu = "<<fibIter(n)<<endl;
		break;
 
		default:
		cout << "Error"; 
	}
	
	system ("pause");
	return 0;
}

//*************************************************************************************
//SILNIA rekurencyjnie
long long silniaRef(int n)
{
	if (n<0)
		return 0;
	else if (n==0 || n==1 ) 
		return 1;
	else if (n>0);
		return n*silniaRef(n-1);
}

//SILNIA iteracyjnie
long long silniaIter(int n)
{
	long long s = 1;
	for (int i = 1; i <= n; i++)
	s *= i;
	return s;
}

//NWD rekurencyjnie
int nwdRek(int x,int y)
{
	if (x%y)
	return nwdRek(y,x%y);
	else
	return y;
}

//NWD iteracyjnie
int nwdIter(int x,int y)
{
	while(x%y)
	{
		int z=x%y;
		x=y;
		y=z;
	}
	return y;
}

//Fibonacci rekurencyjnie
long long fibRek(int n)
{
	if (n==0) return 0;
	else if (n==1) return 1;
	else return fibRek(n-1)+fibRek(n-2);
}

//Fibonacci iteracyjnie
long long fibIter(int n)
{
	int f0=0;
	int f1=1;
	int fn;
	if (n==0) return f0;
	else if (n==1) return f1;
	else
	{
		for(int i=2;i<=n;i++)
		{
			fn=f1+f0;
			f0=f1;
			f1=fn;
		}
		return fn;
	}
}
