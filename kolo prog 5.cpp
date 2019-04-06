//5.Program losuje "n" razy liczby ca³kowite z przedzia³u <0,100>.
//  "n" wczytujemy w programie
//  Liczy ile razy zosta³a wylosowana liczba 100 lub liczba 0.
#include <stdlib.h>
#include<time.h>
#include <stdio.h>
main()
{
	int n=0,i=0,ile=0;
	printf("Podaj n\n");
	scanf("%d",&n);
	srand(time(NULL));
	printf("--------------\n");
	for(i=0;i<=n;i++)
	{
		int z=0;
		z=rand()%101;
		printf("%d\n",z);
		if(z==100 or z==0)
		{
			ile++;
		}
	}
	printf("--------------\n");
	printf("%d\n",ile);
	system("pause");
	return 0;
}
