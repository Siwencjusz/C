//Funkcja: void czas(int sekundy)
//wypisuje czas w formacie gg:mm:ss
#include <stdio.h>
#include <stdlib.h>
#include <time.h>
void czas(int);
int main()
{
    czas(1);
    return 0;
}
void czas(int sekundy )
{
	time_t czas = 0;
	time( & czas );
    printf( "Czas lokalny: %s", ctime( & czas ) );
    return ;
}
