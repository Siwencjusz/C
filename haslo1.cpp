//Program wczytuje napis, a nastêpnie sprawdza, czy napis jest prawid³owy:
//Za³o¿enia: napis musi mieæ  co najmniej 5 znaków, musi zawieræ co najmniej jedn¹ literê ma³¹ i jedn¹ literê wielk¹ (pozosta³e znaki dowolne).
#include <stdio.h>
#include <stdlib.h>
#include <time.h>
main ()
{
	int i=0;
	int il=0,ilem=0,iled=0;
	char napis[20]={'\0'};
	printf("podaj napis\n");
	scanf("%s",napis);
	while(napis[i]!='\0')
	{
		if(napis[i]!='\0')
		{
			il++;
		}
			if(napis[i]>='a' and napis[i]<='z')
		{
			ilem++;
		}
		if(napis[i]>='A' and napis[i]<='Z')
		{
			iled++;
		}
		i++;
	}
	if(il>4 and iled>0 and ilem>0)
	{
		printf("haslo ok\n");
	}
	else
	{
		printf("zdupy\n");
	}
	system("pause");
	return 0;
}
	
