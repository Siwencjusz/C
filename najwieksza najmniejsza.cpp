#include <stdio.h>
#include <stdlib.h>
#include <time.h>
main()
{
     int i,rozmiar=15,ostatni; 
     int tab[rozmiar];
     srand(time(NULL));
     for (i=0;i<rozmiar;i++)
     {
         tab[i]=rand()%11;
         printf("%4d",tab[i]);
     }
     printf("\n");
     ostatni=tab[rozmiar-15];
     for (i=0;i<rozmiar-1;i++)
     {
         tab[i]=tab[i+1];
     }
     tab[14]=ostatni;
     for (i=0;i<rozmiar;i++)
     {
         printf("%4d",tab[i]);
     }
     printf("\n");     
     system("pause");
}
