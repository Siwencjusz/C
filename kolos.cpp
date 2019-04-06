#include <stdio.h>
#include <stdlib.h>
#include <time.h>
int suma(int [],int);
main()
{
	int tab[111]={'\0'},r=0,i=0;
	srand(time(NULL));
	printf("Podaj r\n");
	scanf("%d",&r);
	for(i=0;i<r;i++)
	{
		tab[i]=rand()%51-20;
		printf("%d %d\n",i,tab[i]);
	}
	printf("Suma elementów tablicy wynosi %d\n",suma(tab,r));
	
	


}
int suma(int tab [],int r)
{
	int i=0,suma=0;
	for(i=0;i<r;i++)
	{
		suma=suma+tab[i];
	}
	return suma;
}

