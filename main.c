
#include "cwiczenia1.h"
#include "cwiczenia2.h"
#include "cwiczenia3.h"
#include "cwiczenia4.h"
#include "cwiczenia5.h"
#include "cwiczenia6.h"
#include "cwiczenia7.h"
#include "cwiczenia8.h"
#include "cwiczenia9.h"
#include "cwiczenia10.h"
#include "Kwiz.h"
#include "kolokwiumA.h"

void testy();

int main()
{
    //cw1_zadanie1();
    //cw1_zadanie2();
    //cw1_zadanie3();
    //cw1_zadanie4();
    
    //cw2_zadanie1();
    //cw2_zadanie2();
    //cw2_zadanie3();
    //cw2_zadanie4();

    //Kwiz1();
    //CzyParzysta_Piotrek(47);
    //TestCzyParzysta(34);
    //TestWartoscBezwzgledna(34); //Nie ma funkcji WartoscBezwzglendna i nieskoñczony Test

    //test_czy_potega_dwojki();
    //test_postac_binarna();
    //test_czy_doskonala();  

    //test_generuj_tablice();
    //test_elementy_parzyste_Piotrek();
    //test_elementy_parzyste();
  
    //HorwacikJoanna();
    //test_czy_automorficzna();
    //test_czy_automorficzna2();
    //test_czy_armstronga();
    
    //int b = reverse(234);
    //printf("%d\n", b);
    //int b = czy_palindrom(656);
    //printf("%d\n", b);
    //int b = odwroc_i_dodaj(195);
    //printf("%d\n", b);

    //test_bisekcja();
    //test_liczba_pi();
    //test_liczba_pi_mc();

    //testy();

    //test_lzespolone();
    //czytaj_tekst_z_pliku1("Cwiczenia10.txt");
    //czytaj_tekst_z_pliku2("Cwiczenia10.txt");
    printf("%c",parzysta_cyfra_nierekurencyjnie(113));

    return 0;
}

void testy()
{
    int n = 5;
    printf("%d!=%lld\n", n, nsilnia(n));
    int a = 24, b = 40;
    printf("NWD(%d,%d)=%d\n", a, b, nwd(a, b));
    int fib = 8;
    printf("Element %d ciagu fibonacciego = %d\n", fib, ciag_fibonacciego(fib));
}
