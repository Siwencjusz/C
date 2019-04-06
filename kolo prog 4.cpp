//4.Program losuje do tablicy "TAB" "r" liczb calkowitych z przedzialu <0,30>
 // Funkcja: suma(TAB,r) zwraca w wyniku sumê elementów tablicy
#include <stdlib.h>
#include<stdio.h>
#include<time.h>
int suma(int [],int);
main()
{
	int r=0,i=0;
	printf("Podaj ile liczb naturalnych wylosowac\n");
	scanf("%d",&r);
	srand(time(NULL));
	int TAB[r-1];
	for(i=0;i<r;i++)
	{
		TAB[i]=rand()%31;
	}
	printf("suma wylosowanych elemntow to %d\n",suma(TAB,r));
	system("pause");
	return 0;
}
int suma(int TAB[],int r)
{
	int suma=0,i=0;
	for(i=0;i<r;i++)
	{
		suma=suma+TAB[i];
	}
	return suma;
}
