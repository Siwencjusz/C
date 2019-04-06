//Program losuje 1000 liczb z przedzia³u <0,20>
//Wypisuje, którš (lub które) wylosowa³ najczê?ciej (zastosuj tablicê)
#include <stdlib.h>
#include <stdio.h>
#include <time.h>
main()
{
	int i=0,tab[20]={0},max=0,ma=0;
	srand(time(NULL));
	for(i=0;i<=1000;i++)
	{
		tab[rand()%21]++;
	}
	for(i=0;i<=20;i++)
	{
		printf("%d\t%d\n",i,tab[i]);
	}
	for(i=0;i<=20;i++)
	{
		if(tab[i]>max)
		{
			max=tab[i];
			ma=i;
		}
	}
	printf ("Najczesciej wylosowano %d, %d razy\n",ma,max);
	
	
}
