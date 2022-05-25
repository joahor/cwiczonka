#include <stdio.h>
#include <ctype.h>
#include <string.h>
#include "cwiczenia7.h"

// Zadanie 1. Napisz funkcjê, ktora odwraca kolejnosc cyfr danej liczby.Przykladowo dla liczby 234 funkcja ma zwróciæ liczbê 432.

int reverse(int a)
{
	char s[10];
	sprintf_s(s, sizeof(s), "%d", a);	//??
	_strrev(s);
	sscanf_s(s, "%d", &a);
	return a;
}


// Zadanie 2.  Napisz funkcje, ktora sprawdza, czy liczba naturalna a jest palindromem, tzn.czytana od prawej do lewej jest taka sama jak czytana
//od lewej do prawej, np. 1223221. Wykorzystaj funkcje sprintf_s, strdup oraz strrev.

int czy_palindrom(int a)
{
	return a == reverse(a);
}

// Zadanie 3. Napisz funkcje, ktora realizuje metode "odwroc i dodaj": wezmy jakas liczbê naturalna a, odwracamy kolejnosc jej cyfr i dodajemy do
// wyjsciowej liczby. Jesli suma nie jest palindromem, powtarzamy cala operacje az do skutku.Na przyklad dla liczby 195, koncowy wyniki to 9339.

int odwroc_i_dodaj(int a)
{
	do {
		a += reverse(a);
	} while (!czy_palindrom(a));
	return a;
}

//Przyk³adowe
void podziel_zdanie(char* zdanie, char letter)
{
	char* pom = "", * pom2 = "";
	char* delimiters = " -!?,";
	pom = strtok_s(zdanie, delimiters, &pom2);
	while (pom) {
		if (tolower(pom[0]) == tolower(letter)) {
			printf("%s\n", pom);
		}
		pom = strtok_s(NULL, delimiters, &pom2);
	}
}

void wyrazy_dlugosc(char* zdanie, size_t n)
{
	char* pom = "", * pom2 = "";
	char* delimiters = " -!?,";
	pom = strtok_s(zdanie, delimiters, &pom2);
	while (pom) {
		if (strlen(pom) > n) {
			printf("%s\n", pom);
		}
		pom = strtok_s(NULL, delimiters, &pom2);
	}
}