//program wczytuje liczbê ca³kowitš
//liczy sumê cyfr podanej liczby
#include <stdlib.h>
#include <stdio.h>
#include <time.h>
main()
{
	int i=0,suma=0,liczba=0;
	printf("podaj liczbe\n");
	scanf("%d",&liczba);
	while(liczba!=0)
	{
		suma+=liczba%10;
		liczba/=10;
	}
	printf("Suma wynosi %d",suma);
}
