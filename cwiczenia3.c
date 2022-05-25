#include <stdio.h>


void Kwiz1()
{
	int a, b;
	char c;
	char napis[50] ="0";

	printf("Podaj liczbe calkowita, znak, liczbe calkowita, napis: ");
	if (scanf_s("%d %c %d %s", &a, &c, sizeof(c), &b, napis, sizeof(napis)) < 4) 
	{
		printf("Niepoprawne dane.\n");
		return;
	}
	printf(" %s\n", napis);
	if (c >= 'a' && c <= 'z') {
		printf("%d * %d = %d", a, b, a * b);
		return;
	}
	if (c >= 'A' && c <= 'Z') {
		if (!b) {
			printf("Dzielenie przez 0.\n");
			return;
		}
		printf("%d / %d = %d", a, b, a / b);
		return;
	}
	printf("%d + %d = %d", a, b, a + b);
	return;
}

void CzyParzysta_Piotrek(int a)
{
	if (a % 2 == 0) {
		printf("Parzysta");
		return;
	}
	printf("Nieparzysta");
}

int CzyParzysta(int a)
{
	return (a & 1) == 0;	//??
}

void TestCzyParzysta()
{
	int a = 34, b = 17;
	printf("%d, %d\n", a, CzyParzysta(a));
	printf("%d, %d\n", b, CzyParzysta(b));
}

int WartoscBezwzgledna(a) {
	return (a > 0) ? a : -a;	//??
}

void TestWartoscBezwzgledna()  
{
	int a = 34, b = -17;
	printf("%d, %d\n", a, WartoscBezwzgledna(a));
	printf("%d, %d\n", b, WartoscBezwzgledna(b));
}