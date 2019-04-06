//Program losuje do tablicy "tab" 10 liczb ca³kowitych z przedzia³u <0,30>
//  Wypisuje wylosowane elementy a nastêpnie zamienia w tablicy liczby wg zasady 
//  liczby >=15 zamienia na 1, liczby <15 zamienia na 0.
//  Wypisuje elementy tablicy po zamianie.
#include <stdio.h>
#include <stdlib.h>
#include <time.h>
main ()
{
	int r=10;
	int tab[r-1];
	int i=0;
	srand(time(NULL));
	for(i=0;i<r;i++)
	{
		tab[i]=rand()%31;
		printf("%d\t",tab[i]);
	}
	printf("\n");
	for(i=0;i<r;i++)
	{
		if(tab[i]>=15)
		{
			tab[i]=1;
		}
		else
		{
		tab[i]=0;
		}
	}
	for(i=0;i<r;i++)
	{
		printf("%d\t",tab[i]);
	}
	system("pause");
	return 0;
}
