//Program prosi o podanie dodatniej liczby ca�kowitej tak d�ugo, a� zostanie podana poprawna liczba
#include <stdio.h>
#include <stdlib.h>
#include <time.h>
main ()
{
	int liczba=0;	
	while(liczba>0);
	{
		printf("Podaj liczbe calkowita dodatnia\n");
		scanf("%d",&liczba);
	}
	printf("Libcza %d jest ok\n",liczba);
	system("pause");
	return 0;
}
	
