#include <stdlib.h>
#include <stdio.h>

int main()
{
int num=2;
int *pi;
pi=&num;
printf("wartosc: %d, adres:%d\n",num,&num);
printf("wartosc: %d, adres:%d\n",pi,&pi);
printf("%p\n",*pi);
printf("Rozmiar *char: %d\n",sizeof(char*));
//
int vector [3]= {28, 41, 7};
pi=vector;
printf("%d\n",*pi);//28
pi+=1;
printf("%d\n",*pi);//41
pi+=1;
printf("%d\n  zad nast\n",*pi);//7

//odejmowanie
pi=vector+2;
printf("%d\n",*pi);//28
pi--;
printf("%d\n",*pi);//41
pi--;
printf("%d\n zad nast\n",*pi);//7


//Porównywanie wskaŸników
int *p0=vector;
int *p1=vector+1;
int *p2=vector+2;
printf("%d\n",*p0);
printf("%d\n",*p1);
printf("%d\n zad nast\n",*p2);


//sta³¹ deklarujemy poprzez dodanie const przed typem

num=5;
const int limit=500;
const int *pci;
pi= &num;
pci=&limit;
printf("%d\n",*pi);
printf("%d\n zad nast\n",*pci);

//wycieki pamieci
/*char *chunk;
while(1){
	chunk=(char*)malloc(1000000);
	printf("Alokowanie\n");
}
*/

//utrata adresu przyk³ad
pi=(int*)malloc(sizeof(int));
*pi=5;
//pi * (int*) malloc(sizeof(int));
//













system("pause");
return 0;
}
