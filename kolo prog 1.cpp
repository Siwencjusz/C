//1.Program losuje do tablicy "TAB" "r" liczb calkowitych z przedzialu <-20,30>
//Funkcja: zamiana(TAB,r) zamienia w tablicy liczby parzyste->0,nieparzyste->1.
//Uwaga, r - rozmiar tablicy
#include <stdio.h>
#include <stdlib.h>
#include <time.h>
void zamiana(int [],int);
main ()
{
	int r=0,i=0;
	srand(time(NULL));
	printf("Podaj ile liczb calkowitych wyloswac\n");
	scanf("%d",&r);
	int TAB[r];
	for(i=0;i<=r;i++)
	{
		TAB[i]=rand()%51-20;
		printf("%d	\t %d\n",i+1,TAB[i]);
	}
	printf("--------------------\n");
	zamiana(TAB,r);
	system("pause");
	return 0;
}
void zamiana(int TAB[],int r)
{
	int i=0;
	for(i=0;i<=r;i++)
	{
		if(TAB[i]%2==0)
		{
			TAB[i]=0;
			printf("%d \t	%d\n",i,TAB[i]);
		}
		if(TAB[i]%2==1)
		{
			TAB[i]=1;
			printf("%d \t	%d\n",i,TAB[i]);
		}
	}
	
}
