#include<cstdlib>
#include<iostream>
#include<ctime>

using namespace std;

int main()
{ 

srand(time(NULL));
int liczba;
do
{
liczba=rand()%26;
cout<<liczba<<endl;
}
while(liczba!=0);



system("pause");
return 0;
}
