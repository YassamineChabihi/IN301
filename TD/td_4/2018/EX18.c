#include <stdio.h>
#include <stdlib.h>
int main(void)
{
int s,m,h,rs;
printf("entrer un nombre de second:\n");
scanf("%d",&s);
h=s/3600;
m=(s%3600)/60;
rs=s-h*3600- m*60;
if (h != 1 || m != 1 || rs != 1)
{
  int hs,ms,hrs;
  h=*hs;
  m=*ms;
  rs=*rss;
  
  printf("%d est équivalent à %d heures and %d minutes and %d secondes:\n",s,hs,ms,rss);
}
else {
	printf("%d est équivalent à %d heure and %d minute and %d seconde:\n",s,h,m,rs);
	}

return(0);

}
