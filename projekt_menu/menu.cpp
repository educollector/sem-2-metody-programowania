#include <string>
#include <cstdio>
#include <cstdlib>
#include <iostream>
#include <stdio.h>
#include "menu.h"

using namespace std;
//----------MAIN menu------------------------
void menuMain()
{
	while(true)
	{
		cout << "\nMenu GLOWNE:\n"
				 << MAIN_PLIK << " PLIK\n"
				 << MAIN_KONFERENCJA << " KONFERENCJA\n"
				 << MAIN_UCZESTNIK << " UCZESTNIK\n"
				 << MAIN_ORGANIZATOR << " ORGANIZATOR\n"
				 << MAIN_WYSZUKAJ << " WYSZUKAJ\n"
				 << CHOICE_EXIT << " WYJDZ\n";
		
		int numerOpcji;
		cin >> numerOpcji;
		
		switch(numerOpcji)
		{
		case MAIN_PLIK:
			cout << "#CHOICE: MAIN_PLIK\n";
			menuPlik();
			break;
		
		case MAIN_KONFERENCJA:
			cout << "#CHOICE: MAIN_KONFERENCJA\n";
			menuKonferencja();
			break;
			
		case MAIN_UCZESTNIK:
			cout << "#CHOICE: MAIN_UCZESTNIK\n";
			menuUczestnik();
			break;
			
		case MAIN_ORGANIZATOR:
			cout << "#CHOICE: MAIN_ORGANIZATOR\n";
			menuOrganizator();
			break;
			
		case MAIN_WYSZUKAJ:
			cout << "#CHOICE: MAIN_WYSZUKAJ\n";
			menuWyszukaj();
			break;
		
		case CHOICE_EXIT:
			cout << "#CHOICE: CHOICE_EXIT\n";
			return;
		
		default:
			cout << "Komenda nie zostala rozpoznana. Wprowadz ponownie\n";
			break;
		}
	}
}
//----------PLIK menu------------------------
void menuPlik()
{
	while(true)
	{
		cout << "\nMenu PLIK:\n"
				 << PLIK_ZAPISZ << " ZAPISZ\n"
				 << PLIK_WCZYTAJ << " WCZYTAJ\n"
				 << PLIK_EKSPORTUJ << " EKSPORTUJ\n"
		         << CHOICE_EXIT << " WSTECZ\n";
		
		int numerOpcji;
		cin >> numerOpcji;
		
		switch(numerOpcji)
		{
		case PLIK_ZAPISZ:
			cout << "#CHOICE: PLIK_ZAPISZ\n";
			cout << "not implemented yet\n";
			break;
			
		case PLIK_WCZYTAJ:
			cout << "#CHOICE: PLIK_WCZYTAJ\n";
			cout << "not implemented yet\n";
			break;
			
		case PLIK_EKSPORTUJ:
			cout << "#CHOICE: PLIK_EKSPORTUJ\n";
			cout << "not implemented yet\n";
			break;
		
		case CHOICE_EXIT:
			cout << "#CHOICE: CHOICE_EXIT\n";
			return;
		
		default:
			cout << "Komenda nie zostala rozpoznana. Wprowadz ponownie\n";
			break;
		}
	}
}
//----------KONFERENCJA menu------------------------
void menuKonferencja()
{
	while(true)
	{
		cout << "\nMenu KONFERENCJA\n"
				 << KONFERNCJA_DODAJ << " - DODAJ\n"
				 << KONFERENCJA_USUN << " - USUN\n"
				 << KONFERENCJA_WYSWIETL << " - WYSWIETL\n"
				 << CHOICE_EXIT << " - WSTECZ\n\n";

		int numerOpcji;
		cin >> numerOpcji;

		switch(numerOpcji)
		{
		case(KONFERNCJA_DODAJ):
			cout << "#CHOICE: KONFERNCJA_DODAJ\n";
			cout << "not implemented yet\n";
			break;

		case(KONFERENCJA_USUN):
			cout << "#CHOICE: KONFERNCJA_DODAJ\n";
			cout << "not implemented yet\n";
			break;

		case(KONFERENCJA_WYSWIETL):
			cout << "#CHOICE: KONFERENCJA_WYSWIETL\n";
			cout << "not implemented yet\n";
			break;
		
		case(CHOICE_EXIT):
			cout << "\n#CHOICE: CHOICE_EXIT\n";
			return;

		default:
			cout << "Komenda nie zostala rozpoznana. Wprowadz ponownie\n";
			break;
		}
	}
}
//----------Uczestnik menu------------------------
void menuUczestnik()
{
	while(true)
	{
		cout << "\nMenu UCZESTNIK\n"
				 << UCZESTNIK_DODAJ << " - DODAJ\n"
				 << UCZESTNIK_USUN << " - USUN\n"
				 << UCZESTNIK_WYSWIETL << " - WYSWIETL\n"
				 << CHOICE_EXIT << " - WSTECZ\n\n";

		int numerOpcji;
		cin >> numerOpcji;

		switch(numerOpcji)
		{
		case(UCZESTNIK_DODAJ):
			cout << "#CHOICE: UCZESTNIK_DODAJ\n";
			cout << "not implemented yet\n";
			break;

		case(UCZESTNIK_USUN):
			cout << "#CHOICE: UCZESTNIK_DODAJ\n";
			cout << "not implemented yet\n";
			break;

		case(UCZESTNIK_WYSWIETL):
			cout << "#CHOICE: UCZESTNIK_WYSWIETL\n";
			cout << "not implemented yet\n";
			break;
		
		case(CHOICE_EXIT):
			cout << "\n#CHOICE: CHOICE_EXIT\n";
			return;

		default:
			cout << "Komenda nie zostala rozpoznana. Wprowadz ponownie\n";
			break;
		}
	}
}
//----------Organizator menu------------------------
void menuOrganizator()
{
	while(true)
	{
		cout << "\nMenu ORGANIZATOR\n"
				 << ORGANIZATOR_DODAJ << " - DODAJ\n"
				 << ORGANIZATOR_USUN << " - USUN\n"
				 << ORGANIZATOR_WYSWIETL << " - WYSWIETL\n"
				 << CHOICE_EXIT << " - WSTECZ\n\n";

		int numerOpcji;
		cin >> numerOpcji;

		switch(numerOpcji)
		{
		case(ORGANIZATOR_DODAJ):
			cout << "#CHOICE: ORGANIZATOR_DODAJ\n";
			cout << "not implemented yet\n";
			break;

		case(ORGANIZATOR_USUN):
			cout << "#CHOICE: ORGANIZATOR_DODAJ\n";
			cout << "not implemented yet\n";
			break;

		case(ORGANIZATOR_WYSWIETL):
			cout << "#CHOICE: ORGANIZATOR_WYSWIETL\n";
			cout << "not implemented yet\n";
			break;
		
		case(CHOICE_EXIT):
			cout << "\n#CHOICE: CHOICE_EXIT\n";
			return;

		default:
			cout << "Komenda nie zostala rozpoznana. Wprowadz ponownie\n";
			break;
		}
	}
}
//----------Wyszukaj menu------------------------
void menuWyszukaj()
{
	cout << "Menu WYSZUKAJ\n"
	         << "not implemented yet\n";
			 
	return;
}