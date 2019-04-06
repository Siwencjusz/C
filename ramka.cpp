#include <stdio.h>
#include <stdlib.h>
#include <time.h>
#include <windows.h>
void rysuj(char,int,int,WORD);
int main()
{
	char znak;
	int wys,dl;
	srand(time(NULL));
	WORD kolor=rand()%16;
	HANDLE uchwyt;
    uchwyt=GetStdHandle(STD_OUTPUT_HANDLE);
    SetConsoleTextAttribute(uchwyt,kolor);
	printf("Podaj znak\n");
	scanf("%c",&znak);
	printf("Podaj wysokosc\n");
	scanf("%d",&wys);
	printf("Podaj dl\n");
	scanf("%d",&dl);
	rysuj(znak,wys,dl,kolor);
	system("pause");
	return 0;
}
void rysuj(char znak,int wys,int dl,WORD kolor)
{
	int i;
   	for(i=0;i<dl;i++)
	{
		printf("%c",znak);
	}
	printf("\n");
	for(i=0;i<wys-2;i++)
	{
		int sp,x;
		sp=dl-2;
		printf("%c",znak);
		for(x=0;x<sp;x++)
		{
			printf(" ");
		}
		printf("%c\n",znak);
	}
	for(i=0;i<dl;i++)
	{
		printf("%c",znak);
	}
	printf("\n");
	
}
