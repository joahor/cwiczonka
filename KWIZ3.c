#include <stdio.h>
#define JH_KWIZ3 400 




void HorwacikJoanna(void)
{
	int t[JH_KWIZ3];
	srand((unsigned int)time(0));
	for (int i = 0; i < JH_KWIZ3; ++i) {
		t[i] = rand() % (1999 - 99 + 1) + 99;
	}
	int suma = 0, ilosc = 0;
	float srednia;
	for (int i = 0; i < JH_KWIZ3; i++)
	{
		suma = suma + t[i];
		ilosc = ilosc + 1;
		printf("%d", t[i]);
	}
	srednia = suma / ilosc;
	printf("\nSrednia=%f\n", srednia);
	return srednia;
}