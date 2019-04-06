//Ktoœ wie jak zrobiæ dzisiejszy program u Abramczuka na 4 
//- program rysuje ramkê o podanym przez u¿ytkownika wymiarze,
// kolorze i u¿ytym znaku do tej ramki. I ma byc w samych for'ach... ;/
#include <stdio.h>
#include <stdlib.h>
#include <time.h>
#include <windows.h>
int main()
{
	char znak;
	int wys,dl,i,a;
	printf("Podaj znak\n");
	scanf("%c",&znak);
	printf("Podaj wysokosc\n");
	scanf("%d",&wys);
	printf("Podaj dl\n");
	scanf("%d",&dl);
	printf("Podaj kolor(1-15)\n");
	scanf("%d",&a);
	textcolor(a);
	for(i=0;i<=dl;i++)
	{
		printf("%c",znak);
	}
	printf("\n");
	for(i=0;i<=wys;i++)
	{
		int sp,x;
		sp=dl-2;
		printf("%c",znak);
		for(x=0;x<=sp;x++)
		{
			printf(" ");
		}
		printf("%c\n",znak);
	}
	for(i=0;i<=dl;i++)
	{
		printf("%c",znak);
	}
	printf("\n");
	system("pause");
	return 0;
}
