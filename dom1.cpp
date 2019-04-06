//Program losuje liczby z <0,10>
//tak d³ugo, az wylosuje wszystkie liczby z podanego przedzia³u.
#include <stdlib.h>
#include <stdio.h>
#include <time.h>
main()
{
	int ile=0,i=0,tab[10]={'\0'};
	srand(time(NULL));
	for(i=0;i<11;i++)
	{
		while(tab[i]!=i)
		{
			tab[i]=rand()%11;
			ile++;
		}
	}
	printf("Bylo %d losowan\nZawartosc tablicy:\n",ile);
	
	for(i=0;i<11;i++)
	{
		printf("%d\n",tab[i]);
	}
	system("pause");
	return 0;
	
}
