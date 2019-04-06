#include <stdio.h>
#include <stdlib.h>
#include <time.h>
main()
{
   int i=0;
     char znak;
        system("cls");  
        printf("Podaj litere: ");
        scanf("%c",&znak);
	 if(znak>='a' and znak<='z')
	 {
     printf("%4c\n",znak-32);
     }
     if(znak>='A' and znak<='Z')
     {
     printf("%4c\n",znak+32);
     }
    system("pause");
    return 0;
}
