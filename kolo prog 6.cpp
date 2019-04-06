//6.Funkcja czyPierwsza(int liczba), sprawdza, czy liczba, przekazana jako argument, jest liczbš pierwszš.
//  Funkcja zwraca 0 - jezeli nie
//                 1 - jezeli tak
#include <stdlib.h>
#include <stdio.h>
#include <time.h>
int czyPierwsza(int);
main()
{
	int x=0;
	printf("Podaj x\n");
	scanf("%d",&x);
	printf("%d spelnia warunki=%d\n",x,czyPierwsza(x));
	system("pause");
	return 0;
}
int czyPierwsza(int x)
{
	int ile=0,i=0;
	for(i=1;i<=x;i++)
	{
		if(x%i==0)
		{
			ile++;
		}
	}
	if(ile==2)
	{
		return 1;
	}
	return 0;
}
