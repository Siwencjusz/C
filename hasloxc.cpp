// napis 8 znakow, pierwszy i ostatni to cyfra, pozostale to litery
#include <stdlib.h>
#include <stdio.h>
#include <time.h>
int czyHaslo( char[]);
 main()
{
	char napis[7];
	printf("podaj napis: ");
	scanf("%s",napis);
	int czy=czyHaslo(napis);
	printf("%d\n",czy);
	if(czy==1)
		printf("napis jest prawidlowy ");
	else
		printf("napis nieprawidlowy ");
	system("PAUSE");
	
}

int czyHaslo(char haslo[])
{
	int i=1;
	int ileliczb=0;
	int ilelit=0;
	while(i<7)
	{
		if((haslo[0]>='0' && haslo[0]<='9') && (haslo[7]>='0' && haslo[7]<='9'))
			ileliczb+=2;
			//printf("%d",ileliczb);
		if((haslo[i]>='a' && haslo[i]<='z') || (haslo[i]>='A' && haslo[i]<='Z'))
			ilelit+=1;
			printf("%d",ilelit);
		
		i++;
	}
	if (ilelit==6 and ileliczb==2)
		return 1;
	else
		return 0;
}
