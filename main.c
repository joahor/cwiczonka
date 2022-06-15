#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#include <ctype.h>

int male_litery_nazwisko(char* s, int i);
void test_male_litery_nazwisko();
int macierz_nr_albumu(char** tabl, int n);
void test_macierz_nr_albumu();
void test_nazwisko_nr_albumu();

int main()
{
	test_male_litery_nazwisko();
	
	return 0;
}

int male_litery_nazwisko(char* s, int i, int licznik)
{
	if (i >= strlen(s))
	{
		return licznik;
	}
	licznik += islower(s[1]) ? 1 : 0;
	return male_litery_nazwisko(s, i+1, licznik);
}
void test_male_litery_nazwisko()
{
	char str[100] = "";
	printf("Podaj wyraz: ");
	scanf_s("%s", str, (int)sizeof(str));
	printf("Podany wyraz to: %s\n", str);
	printf("%d", male_litery_nazwisko(str, 0, 0));
}

int macierz_nr_albumu()
{

}

void test_macierz_nr_albumu(char** tabl, int n)
{
	int a;
	printf("podaj wymiar tablicy (n i a):");
	if (scanf_s("%d %d", &n, &a) < 2) {
		printf("niepoprawne dane");
		return;
	}
	char** t = (char**)malloc(n * sizeof(char*));
	if (t == NULL) {
		printf("B³¹d alokacji pamieci\n");
		return;
	}
}

void test_nazwisko_nr_albumu()
{
	char imie[30] = "";
	char nazwisko[60] = "";
	unsigned int wiek;
	char napis[100] = "";
	printf("Podaj imie, nazwisko i wiek:\n");
	if (scanf_s("%s %s %d",
		imie, (int)sizeof(imie), nazwisko, (int)sizeof(nazwisko), &wiek) < 3)
	{
		printf("niepoprawne dane");
		return;
	}
	sprintf_s(napis, sizeof(napis), imie);
	sscanf_s(napis, "witaj %s %s [%d]", imie, nazwisko);
	
}