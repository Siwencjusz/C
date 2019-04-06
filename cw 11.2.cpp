//Funkcja void f2(napis)
//zamienia w napisie "napis"
//cyfra na znak "C"
//ma³e litery na znak "m"
//wielkie litery na znak "W"
//inne znaki bez zmian
//np.: przed: 12-345
//     po:    CC-CCC
#include <stdlib.h>
#include <time.h>
#include <stdio.h>
void f2(char []);
main()
{
	int i=0;
	char napis[20];
	printf("Podaj napis\n");
	scanf("%s",napis);
	printf("%s\n",napis);
	f2(napis);
	printf("%s\n",napis);
	system("pause");
    return 0;   
}
void f2(char napis [])
{
	int i=0;
	while(napis[i]!='\0')
	{
		if(napis[i]>='0' and  napis[i]<='9')
		{
			napis[i]='C';
		}
		if(napis[i]>='a' and  napis[i]<='z')
		{
			napis[i]='m';
		}
		if(napis[i]>='A' and  napis[i]<='Z')
		{
			napis[i]='W';
		}
		i++;
	}
}
