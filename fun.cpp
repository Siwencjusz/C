//Funkcja: bool czyMala(char znak)
//zwraca true, je¿eli znak jest ma³š literš
#include <stdlib.h>
#include <stdio.h>
#include <time.h>
bool mala(char);
main()
{
	char x='z';
	printf("%c=%d\n",x,mala(x));
	system("pause"); 
	return 0;
}
bool mala(char i)
{
	if(i>='a' and i<='z')
	{
		return true;
	}
	return false;
}

