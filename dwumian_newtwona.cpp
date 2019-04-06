#include <stdio.h>
#include <stdlib.h>
#include <time.h>
float licz(float,float);
float dwumian(float ,float);
float silnia(float);
int main(){
	float ile=0;
	float po=0;
	printf("podaj ile\n");
	scanf("%f",&ile);
	printf("podaj po\n");
	scanf("%f",&po);
	printf("Dwumian %.0f po %.0f wynosi: %.0f\n ",ile,po,dwumian(ile,po));
	system("pause");
	return 0;
}
float dwumian(float n,float k)
{
	float i;
	float wynik=1;
	if(n-k==0 or n==k) return 1;
	for( i = 1; i <= k; i++)   // Od 1 do k wykonujemy :
{
wynik = wynik * ( n - i + 1 ) / i;      // Obliczanie ze wzoru iteracyjnego
}
return wynik;
}

/*float silnia(float ile)
{
	float i=0;
	float wynik=1;
	if (ile==0 or ile==1) return 1;
	for(i=1;i<=ile;i++)
	{
		wynik=wynik*i;
	}
	return wynik;
}

float licz(float n,float k)
{
	float i=0;
	float max=n-k;
	float wynik=1;
	for(i=1;i<=max;i++)
	{
		wynik=wynik*(k+i);
	}
	return wynik;
}

float dwumian(float ile ,float po)
{
	float wynik=0;
	float licznik=0;
	float mianownik;
	if((ile-po)<po)
	{
		licznik=licz(ile,po);
		mianownik=silnia(ile-po);
	}
	else
	{
		licznik=licz(ile,(ile-po));
		mianownik=silnia(po);
	}
	wynik=licznik/mianownik;
	printf("%.0f\n",wynik);
	printf("%.0f\n",licznik);
	printf("%.0f\n",mianownik);
	return wynik;
}
*/
