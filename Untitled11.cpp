//program losuje do tablicy 15 liczb ca³kowitych <0,5>
//wypisuje wylosowane elementy
//nastêpnie prosi o podanie liczby i sprawdza, czy liczba jest jednym
//z elementów tablicy
//wypisuje komunikat: "tak jest" lub "nie nie ma takiego elementu"#include <stdio.h>
#include <stdlib.h>
#include <time.h>
#include <stdio.h>
main()
{
     int i=0,d,rozmiar=14,tab[rozmiar]; 
     float x;
     srand(time(NULL));
     for(i=0;i<=14;i++)
     {
     tab[i]=rand()%5;
     printf("%d\n",tab[i]);
	 }
	  printf("Podaj liczbe\n");
	  scanf("%f",&x);
	  printf("%6.2f",x);

	
	system("pause");
    return 0;
	
	 
     
}
