#pragma once

double f1(double x);
double bisekcja(double (*f)(double), double a, double b);
void test_bisekcja();

double liczba_pi(int liczba_iteriacji);
void test_liczba_pi();
double liczba_pi_mc(int liczba_punktow);
void test_liczba_pi_mc();