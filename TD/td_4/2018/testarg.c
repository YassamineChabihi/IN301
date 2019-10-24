#include <stdio.h>
#include <stdlib.h>
#include <string.h>
//./testarg.out dfd dff ggg hhh bbb
/*
int main(int argc,char** argv){
int i;
printf("argc = %d\n", argc);
*/
//argc = 6
/*
for(i=0 ; i<argc ; i++)
printf("%s\n", argv[i]);
return 0;
}
*/
// argv[i] ---> char*
// argv ---> char**

/*
./testarg.out
dfd
dff
ggg
hhh
bbb
*/

//./testarg.out 6.2 -8 2.0

int main(int argc,char** argv){
int i;
float somme = 0;
printf("argc = %d\n", argc);
//argc = 4

for(i=1 ; i<argc ; i++)
somme = somme + atof(argv[i]);
//atof(argv[i] ---> transformer un char* en float
/*
 somme = 0 + 6.2 
 somme = 6.2 + -8 
 somme = -1.8 + 2.0
 somme = 0.2
*/
printf("%f\n", somme);
return 0;
}
//0.200000

//Que se passe-t-il si les arguments ne sont pas des nombres flottants ?
//il va transformer en 0
	

