//Funkcja: int pole(int x,int y)
//zwraca w wyniku pole kwadratu o bokach  x i y
#include <stdlib.h>
#include <stdio.h>
#include <time.h>
int pole(int,int);
main()
{
	int x=4,y=5;
	printf("%d*%d=%d\n",x,y,pole(x,y));
	system("pause");
	return 0;
}
int pole(int x,int y)
{
	int a;
	a=x*y;
	return a;
}


