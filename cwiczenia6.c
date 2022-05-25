#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#include "cwiczenia6.h"

//Zadanie 1
int czy_automorficzna(ulong a)
{
	char s[20], ss[50];
	size_t n, nn;
	ulong aa = a * a;
	sprintf_s(s, sizeof(s), "%lu", a);
	n = strlen(s);
	sprintf_s(ss, sizeof(ss), "%lu", aa);
	nn = strlen(ss);
	for (size_t i = 0; i < n; ++i) 
	{
		if (s[n - i - 1] != ss[nn - i - 1]) 
		{
			return 0;
		}
	}
	return 1;
}

void test_czy_automorficzna(void)
{
	ulong a;
	printf("Podaj liczbe calkowita dodatnia: ");
	if (scanf_s("%lu", &a) < 1)
	{
		printf("ERROR");
		return;
	}
	if (czy_automorficzna(a))
	{
		printf("Liczba %lu jest automorficzna\n", a);
		return;
	}
	printf("Liczba %lu nie jest automorficzna\n", a);
	return;
}

int czy_automorficzna2(ulong a)
{
	char s[20], ss[50], ssub[20];
	size_t n, nn;
	ulong aa = a * a;
	sprintf_s(s, sizeof(s), "%lu", a);
	n = strlen(s);
	sprintf_s(ss, sizeof(ss), "%lu", aa);
	nn = strlen(ss);
	strncpy_s(ssub, sizeof(ssub), ss + (nn - n), n);
	return strcmp(s, ssub) == 0;
}

void test_czy_automorficzna2(void)
{
	ulong a;
	printf("Podaj liczbe calkowita dodatnia: ");
	if (scanf_s("%lu", &a) < 1)
	{
		printf("ERROR"); // Sprawdziæ
		return;
	}
	if (czy_automorficzna2(a))
	{
		printf("Liczba %lu jest automorficzna\n", a);
		return;
	}
	printf("Liczba %lu nie jest automorficzna\n", a);
	return;
}


//Zadaie 2
int czy_armstronga(ulong a)
{
	char s[50];
	size_t n;
	sprintf_s(s, sizeof(s), "%lu", a);
	n = strlen(s);
	float suma = 0;
	for (size_t i = 0; i < n; i++)
	{
		int cyfra = s[i] - '0';
		suma += pow(cyfra, (int)n);
	}
	return suma == a;
}

void test_czy_armstronga(void)
{
	ulong a;
	printf("Podaj liczbe calkowita dodatnia: ");
	if (scanf_s("%lu", &a) < 1)
	{
		printf("ERROR"); // Sprawdziæ
		return;
	}
	if (czy_armstronga(a))
	{
		printf("Liczba %lu jest liczba armstronga\n", a);
		return;
	}
	printf("Liczba %lu nie jest liczba armstronga\n", a);
	return;
}