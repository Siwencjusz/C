//program losuje do tablicy 15 liczb ca³kowitych <0,10>
//wypisuje wylosowane elementy
//nastêpnie przesuwa elementy w tablicy wg zasady: 1->2, 2->3...ostatni->pierwszy
//wypisaæ elementy tablicy po przesuniêciu
//bez tablicy pomocniczej, jedna pêtla
#include <stdio.h>
#include <time.h>
#include <stdlib.h>
main()
{
	int i,rozmiar=14,ostatni,tab[rozmiar];
	srand(time(NULL));
	for(i=0;i<=rozmiar;i++)
	{
		tab[i]=rand()%11;
		printf("%d\t%d\n",i,tab[i]);
	}
	printf("////////////////////////////////////////////////////////////////////////////\n");
	ostatni=tab[rozmiar];
	for(i=rozmiar;0<i;i--)
	{
			tab[i]=tab[i-1];
	}
	tab[0]=ostatni;
	for(i=0;i<=rozmiar;i++)
	{
		printf("%d\t%d\n",i,tab[i]);
	}
}
