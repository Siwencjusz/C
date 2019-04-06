//9.Program losuje liczby z przedzia³u <0,10> tak d³ugo
//a¿ wylosuje 20 liczb parzystych
//wypisuje ilo?æ losowañ.
#include <stdlib.h>
#include <stdio.h>
#include <time.h>
int f1(char,char);
main()
{
	int ile=0,a=0,i=0;
	srand(time(NULL));
	while(ile<20)
	{
		a=rand()%11;
		if(a%2==0)
		{
			ile++;
		}
		i++;
	}
	printf("%d\n",i);
	system("pause");
	return 0;
}
