#include <stdio.h>
#include <math.h>
#include <stdlib.h>
#include "cwiczenia8.h"

const double EPS = 1.01e-6;
extern char* ERR_MSG;

// ZADANIE 1
double f1(double x)
{
	return pow(x, 3) - 3 * x * x + 3;	//?
}

double bisekcja(double (*f)(double), double a, double b) // wskaünik ()
// Metoda szuka miejsc zerowych funkcji w przdziale [a,b]
{
	double x0;
	do {
		x0 = (a + b) / 2.0; 
		double f0 = f(x0);
		if (fabs(f0) < EPS) {
			break;
		}
		double fa = f(a);
		if (fa * f0 < 0) {
			b = x0;
		}
		else {
			a = x0;
		}
	} while (1);
	return x0;
}

void test_bisekcja()
{
	double a = -3.0, b = 1.0;
	double fa = f1(a), fb = f1(b);
	if (fa * fb > 0) {
		printf("Nie jest spe≥niony warunek metody\n");
		return;
	}
	double x0 = bisekcja(f1, a, b);
	printf("%lf, %.10lf\n", x0, f1(x0));
}

// ZADANIE 2		???
double liczba_pi_mc(int liczba_punktow)
{
	int m = 0;
	srand((unsigned int)time(0));

	for (int i = 0; i < liczba_punktow; ++i) {
		double x = (double)rand() / RAND_MAX;
		double y = (double)rand() / RAND_MAX;
		if (x * x + y * y <= 1) {
			++m;
		}
	}
	return 4.0 * m / liczba_punktow;
}

void test_liczba_pi_mc()
{
	int n;
	printf("Podaj liczbe iteracji: ");
	if (scanf_s("%d", &n) < 1) {
		printf("%s", ERR_MSG);
		return;
	}
	printf("Liczba pi = %lf ", liczba_pi_mc(n));
}

double liczba_pi(int liczba_iteriacji)
{
	double el = sqrt(2.0), res = el/2.0;
	for (int i = 0; i < liczba_iteriacji; ++i) {
		el = sqrt(2.0 + el);
		res *= el/ 2.0;
	}
	return 2.0 / res;
}

void test_liczba_pi()
{
	int n;
	printf("Podaj liczbe interacji: ");
	if (scanf_s("%d", &n) < 1) {
		printf("%s", ERR_MSG);
		return;
	}
	printf("Liczba pi = %lf ", liczba_pi(n));
}