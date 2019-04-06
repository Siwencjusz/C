#include <stdio.h>
#include <stdlib.h>
int main()
{
      char znak;
      int q=0,w=0;
	    do
	    {
          printf("Podaj znak: \n");
          scanf("%c",&znak);
          if(znak=='a')
		  {
                      q++;
          }
          if(znak=='t')
          {
                      w++;
          }
        }while(q<=2 and w<=2);
      if(q>=2 and w>=2)
      {
	  printf("Z tych znakow mozna ulozyc wyraz 'tata' !\n");
	  }
      system("pause");
      return 0;
}
