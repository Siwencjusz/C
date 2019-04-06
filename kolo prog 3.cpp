//Program wczytuje Symbol Konta a nastepnie 
//  funkcja int CzyOk(SymbolKonta)  
//  sprawdza czy symbol jest prawidawy.
//  Zalozenie:
//  symbol zbudowany jest z 10 znaków
//  pierwszym znakiem nie mo¿e byæ liczba 
//  Funkcja zwraca 0 - jezeli symbol jest OK
//                 1 - jezeli symbol nieprawidlowy
#include <stdio.h>
#include <stdlib.h>
#include <time.h>
int czyok(char []);
main ()
{
	int i=0;
	char symbol[100]={'\0'};
	printf("Podaj nr konta\n");
	scanf("%s",&symbol);
	printf("Nr konta jest:\n %d",czyok(symbol));
}
int czyok(char SymbolKonta [])
{
	int i=0;
	if(SymbolKonta[0]>='0' and SymbolKonta[0]<='9')
	{
		return 1;
	}
	while(SymbolKonta[i]!='\0')
	{
		i++;
	}
	if(i!=10)
	{
		return 1;
	}
	else
	{
		return 0;
	}
	



	return 0;
}
