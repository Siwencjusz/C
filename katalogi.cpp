#include <stdlib.h>
#include <stdio.h>
#include <string.h>
#include <math.h>
#include <dirent.h>
#include <sys/types.h>
#include <dirent.h>
#include <sys/stat.h>
#include <unistd.h>
int Katalog (char *);
int main(){
    
    Katalog(".");
    system("pause");
    return 0;
}
int Katalog(char* nazwa)
{
 char sciezka[255];
 char rodzaj;
 struct stat fileStat;
 DIR *dir;
 struct dirent *dp;
 dir = opendir(nazwa);
 if(!dir) return 1;
 while (dp = readdir (dir)){
       sciezka[0]=0;
       if(strcmp(dp->d_name, ".")==0) continue;
       if(strcmp(dp->d_name, "..")==0) continue;
       stat(dp->d_name,&fileStat);
       rodzaj='x';
       if(S_ISDIR(fileStat.st_mode)) rodzaj='d';
       if(fileStat.st_mode & S_IFREG) rodzaj='p';
       printf("%s %c\n",dp->d_name,rodzaj);
       if(rodzaj=='p') continue;
       sprintf(sciezka,"%s/%s",nazwa,dp->d_name);
       Katalog(strdup(sciezka));;
 } 
closedir(dir);
 
  return 0;                
}
