#include <stdio.h>
#include <stdlib.h>
#include <time.h>



int main(int argc, char *argv[])
 {
	srand(time(NULL));
	int a,b,il,x,i,tak,nie;
	tak=0;
	nie=0;
	i=1;
	do
	{
		printf("Losowanie %d:\n",i+1);
		a=rand()%11;
		b=rand()%11;
		il=a*b;
	
	printf("Wylosowales %d i %d\n",a,b);   
		while(x!=il)
		{
			printf("Podaj iloczyn wylosowanych liczb\n");
			scanf("%d",&x);
		
			if(x!=il)
				{
				printf("\nZly iloczyn\n");
				nie=nie+1;
				}
		}
		printf("Odpowiedz poprawna\n\n",x);
		tak=tak+1;
	i=i+1;
	}
	while (i<=5);
	printf("\nPodales %d prawidlowych odpowiedzi i %d nieprawidlowych\n",tak,nie);
	system("pause");
    return 0;
}
