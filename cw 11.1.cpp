//1.
//Funkcja void f1(tab1,tab2)
//zwiêksza wrto?ci w tab1 o warto?æ odpowiadajšcego elementu z tab2.
//tablice tab1 i tab2 maja ten sam rozmiar.
//
//
//t1 1  5 7  9
//t2 3  6 1  4
//t1 4 11 8 13
#include <stdlib.h>
#include <time.h>
#include <stdio.h>
const int r=4;
void f1(int [],int[]);
main()
{
	int t1[r]={1,5,7,9};
	int t2[r]={3,6,1,4};
	int i=0;
	printf("t1-------------------\n");
	for(i=0;i<r;i++)
	{
	printf("%d \t %d\n",i+1,t1[i]);
	}
	printf("t2-------------------\n");
	for(i=0;i<r;i++)
	{
	printf("%d \t %d\n",i+1,t2[i]);
	}
	printf("t1change-------------------\n");
	f1(t1,t2);
	for(i=0;i<r;i++)
	{
	printf("%d \t %d\n",i+1,t1[i]);
	}
	system("pause");
    return 0;   
}
void f1(int tab1 [],int tab2 [])
{	
	int i=0;
	for(i=0;i<r;i++)
	{
		tab1[i]=tab1[i]+tab2[i];
	}
	
}
