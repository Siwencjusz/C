//2.Program losuje do tablicy "TAB" "r" liczb calkowitych z przedzialu <-30,30>
//Funkcja: zamiana(TAB,r) zamienia w tablicy liczby na przeciwne np.: 3-> -3, -7 ->7
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
	r=r-1;
	int TAB[r];
	for(i=0;i<=r;i++)
	{
		TAB[i]=rand()%61-30;
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
		TAB[i]=TAB[i]*(-1);
		printf("%d \t	%d\n",i+1,TAB[i]);
	}
	
}
