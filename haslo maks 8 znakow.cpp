//Program czyta napis, a nast�pnie sprawdza, czy napis jest prawid�owy:
//Za�o�enia: napis musi mie� nie wi�cej ni� 8 znak�w, musi zawiera�, co najmniej jedn� cyfr� i jedn� liter� wielk� (pozosta�e znaki dowolne).
#include <stdlib.h>
#include<time.h>
#include <stdio.h>
bool czyok(char []);
main()
{
	char napis[20];
	printf("Podaj haslo\n");
	scanf("%s",napis);
	int i=0,x=0,c=0;
	while(napis[i]!='\0')
	{
		if((napis[0]>='0' and napis[0]<='9') or (napis[0]>='0' and napis[0]<='9'))
		{
			x++;
		}
		if (i>0 and i <7)
		{
			if((napis[i]>='A' and napis[i]<='Z') or (napis[i]>='a' and napis[i]<='z'))
			{
				c++;
			}
	    }
		i++;
	}
	printf("%d %d %d",x,c,i)
	if(i<=8 and x>0 and c>0)
	{
		printf("haslo ok\n");
	}
	else
	{
		printf("haslo z dupy\n");	
	}
	system("pause");
	return 0;
}
