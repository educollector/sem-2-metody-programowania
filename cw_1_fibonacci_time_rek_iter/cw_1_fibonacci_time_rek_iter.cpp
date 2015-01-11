// cw_1_Fibonacci_Iter_compar_rekur.cpp : Defines the entry point for the console application.
//

#include "stdafx.h"
#include <iostream>
#include <cstdlib>
#include<ctime>

long long fib (int n);
long long fibIter (int n);

using namespace std;


int _tmain(int argc, _TCHAR* argv[])
{
	int n=14;
	int tab[7]={30,35,40,45,50,55,60};

	for(int i=0; i<7;i++)
	{
		int nr =tab[i];
		unsigned start = clock();
		fib(nr);
		unsigned stop = clock();
		//cout<<"czas obliczen rekurencyjnych = "<<stop-start<<endl;

		unsigned startIter = clock();
		fibIter(nr);
		unsigned stopIter = clock();
		//cout<<"czas obliczen iteracyjnych= "<<stopIter-startIter<<endl;

		cout<<"nr elementu ciagu: "<<nr<<" cas rekurencja \t"<<stop-start<<" \tczas iteracyjnie  "<<stopIter-startIter<<endl;
	}

	system ("pause");
	return 0;
}

long long fib (int n)
{
	if (n==0) 
		return 0;
	else if (n==1)
		return 1;
	else
		return fib(n-1)+fib(n-2);
}

long long fibIter (int n)
{
	int f0=0;
	int fn;
	int f1=1;
	
	if (n==0) return f0;
	else if (n==1) return f1;
	else
	{
		for (int i =2; i <=n; i++)
		{
			fn=f1+f0;
			f0=f1;
			f1=fn;
		}

	}
return fn;

}