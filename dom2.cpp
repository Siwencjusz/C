//Program wczytuje napis, sprawdza, czy napis jest palindromem
//przyk³ady palndromów: kok, anna, 
#include <stdlib.h>
#include <time.h>
#include <stdio.h>
main()
{
	int i=0,c=0,e=0;
	char tab[20]={'\0'},wyraz2[20]={'\0'};
	printf("Podaj wyraz\n");
	scanf("%s",tab);
	while(tab[i]!='\0')
	{
		i++;
		c++;
	}
	printf("////////////////////////\n");
	for(i=c-1;i>=0;i--)
	{
		wyraz2[e]=tab[i];
		e++;
	}
	printf("%s\n",wyraz2);
	while(i<=c)
	{
		if(tab[i]!=wyraz2[i])
		{
			 printf("Wyraz nie jest palindromem\n");
			 return 0;
		}
	 i++;
	}
	printf("Wyraz jest palindromem\n");
	system("pause");
	return 0;
}
