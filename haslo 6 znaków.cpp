//Program czyta haslo.
//Funkcja:    czyOK(haslo) sprawdza, czy has�o jest prawid�owe
//Prawid�owe has�o ma co najmniej 6 znak�w, pierwszym znakiem nie mo�e by� cyfra
//wynik funkcji:      tak  - 1     nie 0
#include <stdlib.h>
#include<time.h>
#include <stdio.h>
bool czyok(char []);
main()
{
	char haslo[20]={'\0'};
	int i;
	printf("Podaj haslo\n");
	scanf("%s",haslo);
	for(i=0;i<7;i++)
	{
		printf("%c %d\n",haslo[i],i);
	}
	printf("haslo jest %d\n",czyok(haslo));
	system("pause");
	return 0;
}
bool czyok(char haslo [])
{
	int i=0;
	if(haslo[0]>='0' and haslo[0]<='9')
	{
		return 0;
	}
	while(haslo[i]!='\0')
	{
		i++;
	}
	if(i<6)
	{
		return 0;
	}
	else
	{
		return 1;
	}
}
	
