#include <stdio.h>
#define JOANNA_HORWACIK 20
//#define ERR_MSG "Niepoprawne dane"
#define ABS(a) (a) > 0 ? (a): (-a)	//??

const char* ERR_MSG = "Niepoprawne dane";

int czy_potega_dwojki(int a)	//??
{
	int i = 1;
	while (i < a){
		i = i << 1;
	}
	return (i == ABS(a));
}

void test_czy_potega_dwojki()
{
	int a;
	printf("Podaj liczbe calkowita: ");
	if (scanf_s("%d", &a) < 1) {
		printf(ERR_MSG);
		return;
	}
	printf("liczba %s %s", czy_potega_dwojki(a) ? "jest potega 2" : "nie jest potega 2");
}


void postac_binarna(short a)
{
	int i = 1, j = 0, n = sizeof(a) * 8;
	while (j < n) {							// Wyliczamy wartoœæ wczesniej a nie w petli!!!
		printf("%d", a & i);
		i = i << 1; ++j;
	}
}

void test_postac_binarna()
{
	short a;
	printf("Podaj liczbe calkowita:");
	if (scanf_s("%hd", &a) < 1) {
		printf(ERR_MSG);
		return;
	}
	postac_binarna(a);
}

int czy_doskonala(unsigned int a)		// Jest doskonala kiedy jest suma jej dzielnikow (oprocz jej samej)
{
	unsigned int s = 0, i = 1;
	while (i < a) {
		if (a % i == 0) {		// Patrzymy czy a przy dzieleniu przez i daje reszte 0
			s += i;
		}
		i++;
	}
	return s == a;
}

void test_czy_doskonala()
{
	int a;
	printf("Podaj liczbe calkowita dodatnia: ");
	if (scanf_s("%d", &a) < 1) {
		printf("ERR");
		return;
	}
	printf("Liczba %d %s", a, czy_doskonala(a) ? "jest doskonala" : "nie jest doskonala");	//??
}