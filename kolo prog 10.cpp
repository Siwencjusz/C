//10.Program wypisuje najwiêksza liczbê naturalnš "n" która spe³nia warunek: n*n-3<100  
#include <stdlib.h>
#include <stdio.h>
#include <time.h>
main()
{
	int n=0,m;
	m=n-3;
	while(n*m<100)
	{
		if(n*m<100)
		{
		n++;
		m++;
		}
	}
	if(n*m>100)
	{
		n=n-1;
	}
	printf("%d\n",n);
	system("pause");
	return 0;
}
