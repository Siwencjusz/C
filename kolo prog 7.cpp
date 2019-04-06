//7.Funkcja: f1(xmax) losuje liczby calkowite z przedzialu <0,xmax>,
// Wylosowanie 10 razy xmax konczy losowanie. 
// Funkcja zwraca ilosc losowan.
#include <stdlib.h>
#include <stdio.h>
#include <time.h>
int f1(int);
main()
{
	int x=0;
	printf("Podaj najwyzsza liczbe w przedziale\n");
	scanf("%d",&x);
	printf("%d powtorzylo sie 10 raz przy losowaniu %d\n",x,f1(x));
	system("pause");
	return 0;
	
}
int f1(int xmax)
{
	srand(time(NULL));
	int i=0,ile=0,z=0,x=0,d=0;
	x=xmax+1;
	while(ile<10)
	{
		z=rand()%x;
		if(z==xmax)
		{
			ile++;
		}
		d++;
	}
	return d;
}
