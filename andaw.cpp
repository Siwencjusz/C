#include <stdio.h>
#include <stdlib.h>
int rozszyfruj (int, int);
int main()
{
	int sh; 
	sh = rozszyfruj (3, 0); 
	printf ("\nsh%d", sh); 
	
	
}
int rozszyfruj (int bh, int cz) 
{ 
 int wt, lg; 
 printf ("\n[%d]bh%d", cz, bh); 
 if (bh < 2) 
 return 1; 
 else 
 { 
 wt = rozszyfruj (bh - 2, cz + 1); 
 printf ("\n[%d]wt%d", cz, wt); 
 lg = rozszyfruj (bh - 1, cz + 1); 
 printf ("\n[%d]lg%d", cz, lg); 
 return -2 * wt + -4 * lg; 
 } 
} 
