#include <stdio.h>
#include <stdlib.h>
#include <time.h>
int ileLiter(char[]);
int main(int argc, char *argv[]) {
	char napis[20]="trala lala lala s";
	printf("%d \n",ileLiter(napis));
	
		
	system("pause");
    return 0;
}

int ileLiter(char napis[]  )
{
	int i=0,j=0;
	for(i=0;napis[i]!='\0';i++)
		{
				if ((napis[i]>='a' && napis[i]<='z') || (napis[i]>='A' && napis[i]<='Z'))
				{
					j++;
				}	
		}
	
	return j;
}
