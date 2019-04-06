//Funkcja: int calkowita(double liczba)
//wraca w wyniku czê?æ ca³kowitš z liczby przekazanej jako argument
#include <stdio.h>
#include <stdlib.h>
#include <time.h>
int calkowita(double);
main()
{
	double z=2.22;
	printf("Calosci z liczby %6.2f to: %d\n",z,calkowita(z));
	system("pause");
	return 0;
}
int calkowita(double liczba)
{
    return liczba;
}


