#include <stdlib.h>
#include <stdio.h>
#include <time.h>
int suma(int,int);
main ()
{
	int l1=6,l2=2;
	srand(time(NULL));	
	l1=rand()%21;
	l2=rand()%21;
	printf("%d\n",l1);
	printf("%d\n",l2);
	printf("%d\n",suma(l1,l2));
	system("pause");
	return 0;
	
}
int suma(int l1,int l2)
{
	int suma=0;
	int i=1;
	if(l1>l2)
	{
		while(l1>=l2)
		{
			suma=suma+l2;
			l2=l2+i;
		}
		return suma;
	}
		if(l2>l1)
	{
		while(l2>=l1)
		{
			suma=suma+l1;
			l1=l1+i;
		}
		return suma;
	}
		if(l1==l2)
	{
		suma=l1;
		return suma;
	}
}
