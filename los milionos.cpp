//Program losuje liczby ca³kowite z przedzia³u: <0,5> tak d³ugo a¿ wylosuje co najmniej 3 razy liczbê 1 i co najmniej 3 razy liczbê 5. Wypisuje ile razy losowa³.
#include <stdlib.h>
#include<time.h>
#include <stdio.h>
main()
{
	int i=0,x=0,a=0;
	srand(time(NULL));
	while(i<3 or x<3)
	{
		a=rand()%6;
		printf("%d\n",a);
		if(a==1)
		{
			i++;
		}
		if(a==5)
		{
			x++;
		}
	}
	printf("%d '1'\t %d '5'\n",i,x);
	system("pause");
	return 0;
}
