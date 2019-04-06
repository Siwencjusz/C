#include <stdio.h>
#include <stdlib.h>
#include <time.h>

int main() 
{
	
	int a,b,c,d,e;
	srand(time(NULL));
	d=1;
	
	do
	{
		
		a=rand()%11;
		b=rand()%11;
    	printf("a=%d, b=%d\n",a,b);	
	
		do	
		{
			printf("Podaj iloczyn a i b:");
			scanf("%d",&c);
			
			if(c!=a*b)
			{
				printf("Zly wynik!\n");
			}
			else
			{
				printf("Dobrych wynikow %d\n",d);
			}
		
		}while(c!=a*b);	
	d=d+1;
	}while(d<=5);
	system("pause");
	return 0;
}
