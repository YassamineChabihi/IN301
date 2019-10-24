#include <stdio.h>
#include <stdlib.h>



int longeur(char* s) 
	{
		int i=0;
		while(s[i]!='\0')
		i++;
		return i;
	}



int main(int argc,char** argv)
{
	int i;
	for(i=1 ; i<argc ; i++)
	printf("taille de la chaine %s ,%d \n",argv[i],longeur(argv[i]));
	//int resultat = longeur("lkhjuyguyg"));
	//printf("%i\n", longeur);
	return 0;
			
}	

	
	
	
	
	
	

