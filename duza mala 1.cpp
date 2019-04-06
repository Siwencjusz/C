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
	 do
	 {
     printf("%4c\n",znak-32);
 	 }while (znak<'a' and znak>'z');
 	 while (znak<'A' and znak>'Z');
	 {
     printf("%4c\n",znak+32);
 	 }
    
     
}
