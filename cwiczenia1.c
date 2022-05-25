#include <stdio.h>

void cw1_zadanie1(void)
{
    printf("Hello world!\n");
}

void cw1_zadanie2(void)
{
    int a, b;
    printf("Podaj dwie liczby calkowite:");
    if (scanf_s("%d%d", &a, &b) < 2) { // konieczne jest podanie adresu zminnej!!!
        printf("Niepoprawne dane");
        return; // bez wartosci, poniewaz funkcja typu void
    }
    printf("%d + %d = %d\n%d - %d = %d\n%d * %d = %d\n", a, b, a + b, a, b, a - b, a, b, a * b);

}

void cw1_zadanie3(void)
{
    float r;
    const float pi = 3.14;
    printf("Podaj promien kola: ");
    if (scanf_s("%f", &r) < 1) {
        printf("Niepoprawne dane");
        return; // bez wartosci, poniewaz funkcja typu void
    }
    printf("Pole kola = %f\nObwod kola = %f,", pi * r * r, 2 * pi * r);
}

void cw1_zadanie4(void)
{
    char imie[30];
    char nazwisko[50];
    printf("Podaj swoije imiê: ");
    scanf_s("%s", imie, sizeof(imie));
    printf("Podaj swoije nazwisko: ");
    scanf_s("%s", nazwisko, sizeof(nazwisko));
    printf("Witaj %s %s!\n", imie, nazwisko);
}
