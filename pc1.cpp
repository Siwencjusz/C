#include <stdio.h>
#include <stdlib.h>
#include <time.h>
int main()
{
    int i,d=1,los,los2,iloczyn=los*los2;
    printf("RAND_MAX = %d\n",RAND_MAX);
    srand(time(NULL));
	do
	{d=d+1;
	for (i=1;i<=3;i++)
    {
        los=rand()%11;
        printf("los= %d\n",los);
        los2=rand()%11;
        printf("los2= %d\n",los2);
 		printf("iloczyn wynosi %d\n",los*los2);
 	} 
    }while(d<=5);
    system("pause");
    return 0;
}
