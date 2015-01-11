// cw_7_polimorfizm.cpp : Defines the entry point for the console application.
//

#include "stdafx.h"

class Graniastoslup
{
	protected:
		double pole_p;
		double wysokosc;
	public:
		/*Graniastoslup()
		{};*/
		Graniastoslup()
		{
			pole_p = 40;
			wysokosc = 10;
		};

		Graniastoslup(double pp, double h):
			pole_p(pp), wysokosc(h)
		{};

		double obliczObjetosc(double pp, double wys)
		{
			double obj = pp * wys;
		}
};

class GTtrapez : public Graniastoslup
{
	protected:
		double podstwa_gorna;
		double podstawa_dolna;
		double ramie1;
		double ramie2;
		double h;

	private:
		double obliczPolePodstawy()
		{
			double pole_p = ((podstwa_gorna + podstawa_dolna)/2)*h; 
		}
	public:
		GTtrapez():
			podstawa_dolna(4), podstwa_gorna(2), h(3), ramie1(4), ramie2(3)
		{};
		GTtrapez(double p_dol, double p_gor, double wys, double ram1, double ram2):
			podstawa_dolna(p_dol), podstwa_gorna(p_gor), h(wys), ramie1(ram1), ramie2(ram2)
		{};

		double getPodstaGorna()
		{
			return podstwa_gorna;
		}

		double getPodstaDolna()
		{
			return podstawa_dolna;
		}

		double getWysokosc()
		{
			return h;
		}

		double getRamie1()
		{
			return ramie1;
		}

		double getRamie2()
		{
			return ramie2;
		}

		double getPolePodstawy()
		{
			obliczPolePodstawy();
		}

		double obliczPolePowierzchniCalkowitej()
		{
			double ppc = getPolePodstawy()*2 + (getRamie1() + getRamie2() + getPodstaDolna() + getPodstaGorna())*h;
		}

		
		

};




int _tmain(int argc, _TCHAR* argv[])
{
	return 0;
}

