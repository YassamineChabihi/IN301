#include <stdio.h>
#include <stdlib.h>

//./EX18_B.out 344 
int longeurR(char* s){
	printf("Hi ");
	if(s[0]=='\0')
	return 0;
	return 1+longeurR(s+1);
}
// s char* s+0,s+1,s+2,s+3
// s[i] char
/*
	s[0]=3; s[1]=4; s[2]=4; s[3]='\0'
Hi	longeur(s)
Hi		1+longeur(s+1) ---> 1+2
Hi			1+longeur(s+2) ---> 1+1
Hi				1+longeur(s+3) ---> 1+0
*/
int main(int argc,char** argv)
{
	int i;
	for(i=1 ; i<argc ; i++)
	printf("taille de la chaine %s ,%d \n",argv[i],longeurR(argv[i]));
	
	
return 0;
			
}	
//Hi Hi Hi Hi taille de la chaine 344 ,3 
