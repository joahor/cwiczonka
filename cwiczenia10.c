#include <stdio.h>
#include <string.h>
#include <stdlib.h>
#include "cwiczenia10.h"


typedef struct {
	double re, im;
} Lzespolona;

char* lzesp2str(Lzespolona x)
{
	int n = 30 * sizeof(char);
	char* s = (char*)malloc(n);
	if (s == NULL) {
		return "";
	}
	sprintf_s(s, n, "%.2lf%+.2lfi", x.re, x.im);
	return s;
}

Lzespolona add(Lzespolona x, Lzespolona y)
{
	Lzespolona w = { x.re + y.re, x.im + y.im };
	return w;
}

Lzespolona substract(Lzespolona x, Lzespolona y)
{
	Lzespolona w = { x.re - y.re, x.im - y.im };
	return w;
}

Lzespolona multiply(Lzespolona x, Lzespolona y)
{
	Lzespolona w = { x.re * y.re - x.im * y.im, x.re * y.im + y.re *x.im};
	return w;
}

void test_lzespolone()
{
	Lzespolona x = { 3, 4 };
	Lzespolona y = { 1,2 };
	printf("%s\n", lzesp2str(add(x,y)));
	printf("%s\n", lzesp2str(substract(x, y)));
	printf("%s\n", lzesp2str(multiply(x, y)));

}

void czytaj_tekst_z_pliku1(char* fname)
{
	FILE* fin;
	char str[50];
	int licznik = 0;
	if (fopen_s(&fin, fname, "r") != 0) {
		return;
	}
	while (!feof(fin)) {
		if (fscanf_s(fin, "%s", str, sizeof(str))<1) {
			continue;
		}
		++licznik;
		printf("%s\n", str);
	}
	printf("Liczba slow: %d", licznik);
	fclose(fin); //Trzeba zamknac plik na koniec
}

void czytaj_tekst_z_pliku2(char* fname)
{
	FILE* fin;
	char str[50] = "";
	int l_words = 0;
	int l_chars = 0;

	if (fopen_s(&fin, fname, "r") != 0) {
		printf("Blad otwarcia pliku!\n");
		return;
	}
	while (!feof(fin)) {
		if (fscanf_s(fin, "%s", str, (unsigned int)_countof(str)) < 1) {
			continue;
		}
		l_words++;
		l_chars += (int)strlen(str);
	}
	printf("Liczba wyrazow: %d\nLiczba znakow bez spacji: %d\n", l_words, l_chars);
	fclose(fin); //!!!!!!!!
}