//8.Program wczytuje  znak i napis
//funkcja: f1(napis,znak)
//zwraca w wyniku pozycje pierwszego wystapienia "znak" w "napis"
//np.: f1("komputer",'p')
//wynik: 4
#include <stdlib.h>
#include <stdio.h>
#include <time.h>
int f1(char[],char);
main()
{
	char znak,napis[20];
	printf("podaj znak\n");
	scanf("%c",&znak);
	printf("podaj napis\n");
	scanf("%s",&napis);
	printf("%c wystepuje w napisie po raz pierwszy jako %d znak \n",znak,f1(napis,znak));
	system ("pause");
	return 0;
	
}
int f1(char napis[],char znak)
{
	int i=0;
	for(i=0;i<20;i++)
	{
		if(napis[i]==znak)
		{
			return i+1;
		}
	}
	return 0;
	
	
}
