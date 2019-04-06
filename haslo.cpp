#include<stdio.h>
#include<stdlib.h>

char napis[20];
int j=0,i;
bool mala=false,duza=false,liczba=false;
int main()
{ 
	do
	{	
	i=0;
	scanf("%s",napis);
	while(napis[i]!='\0')
	{
	if(napis[i]>='a'&&napis[i]<='z')
	mala=true;
	if(napis[i]>='A'&&napis[i]<='Z')
	duza=true;
	if(napis[i]>='0'&&napis[i]<='9')
	liczba=true;
	i++;
	}
	if(i-1>=8 && i-1<=10 && mala && duza && liczba)
	{
	printf("dobre haslo\n");
	j=3;
	}
	else
	{
	printf("zle haslo\n");
	j++;
	}
	while(j<3);
	system("pause");
	return 0;
	}
