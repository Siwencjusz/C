//program wczytuje znak i sprawdza
//czy podany znak jest ma³š literš
#include <stdlib.h>
#include <time.h>
#include <stdio.h>
main()
{
	char a;//97 122
	int i;
	printf("podaj  litere\n");
	scanf ("%c",&a);
	if(a>='a' and a<='z')
	{
		printf("%c jest mala litera\n",a);
	}
	else
	{
		printf("%c nie jest mala litera\n",a);
	}
	system("pause");
	
}
