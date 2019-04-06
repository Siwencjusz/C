#include <stdio.h>
#include <stdlib.h>
#include <time.h>
int main()
{
	 int i,los,tabI[19]={0};
     srand(time(NULL));
     for (i=1;i<=10000;i++)
    {
        los=rand()%21;
        printf("%d\n",los);
    }
    system("pause");
}
