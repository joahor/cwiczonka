#include <stdio.h>
#include <math.h>
#include <stdlib.h>
#include "cwiczenia9.h"

extern EPS;

llong nsilnia(int n)
{
	//printf("%d, %d, %d\n", sizeof(int), sizeof(long), sizeof(long long));   //testowanie

	if (n < 2) {
		return 1;
	}
	return n*nsilnia(n-1);
}

int nwd(int a, int b)
{
	if (b == 0) {
		return a;
	}
	return nwd(b, a % b);
}

int ciag_fibonacciego(int fib)
{
	if (fib == 0) {
		return 0;
	}
	if (fib == 1) {
		return 1;
	}
	if (fib > 1) {
		return ciag_fibonacciego(fib - 1) + ciag_fibonacciego(fib - 2);
	}
}

int rfib(int n) //Przyk³adaowe rozwi¹zanie
{
	if (n < 2) { 
		return  n; 
	}
	return rfib(n - 1) + rfib(n - 2);
}


double funk(double x)
{
	return pow(x, 3) - 3 * x * x + 3;
}

int bisekcja_rekurencyjnie(double (*f)(double), double a, double b)
{
	double srodek = (a + b) / 2;
	double f0 = f(srodek);

	if (b - a <= EPS || fabs(f0) < EPS) {
		return srodek;
	}

	if (f(a) * f(srodek) < 0) {
		return bisekcja_rekurencyjnie(funk, a, srodek, EPS);
		return bisekcja_rekurencyjnie(funk, srodek, b, EPS);
	}
}

// Przyk³adowe
int dlugosc_zdania(char* s, int i)
{
	if (s[i] == '\0') 
		return i;
	return dlugosc_zdania(s, i + 1);
}

void najwiekszy_element(int* a, int n, int i, int* m)
{
	if (i >= n) { 
		return; 
	}
	if (a[i] > *m) { 
		*m = a[i]; 
	}
	najwiekszy_element(a, n, i + 1, m);
}