#include <stdio.h>
#include <stdlib.h>
//#include <string.h>
#include <ctype.h>
//#include <ctype.h> ---> pour isdigit()

int isdigit2(char* s)
{
	int i=0;
	int nb_points = 0;
	while(s[i] != '\0')
	{
		if(s[i] == '-')
		{
			if(i != 0)
			{
				return 0;
			}
		}
		else if(s[i] == '.' )
		{
			nb_points ++;
			if(i==0 || s[i+1]=='\0' || nb_points > 1)
			{
				return 0;
			}
		}
		else if(isdigit(s[i]) == 0)
		{
			return 0;
		}
		
		i++;
	}
//s=il fait le while pour chaque i=0 jusqu'a s[i+1]='/0'}	
	return 1;
// retourner s	
}

//./testarg.out 6.2 -8 h

int main(int argc,char** argv){
int i;
float somme = 0;
printf("argc = %d\n", argc);
//argc = 4

for(i=1 ; i<argc ; i++)
{
	if ( isdigit2(argv[i])== 1 )
	{
		somme = somme + atof(argv[i]);
	}
// 2 fois
//somme = 6.2 -8;
//somme = -1.8;	
		else
	{		
		printf("le argument %s n'est pas un nombre flottant\n", argv[i]);
	}
// 1 fois
//le argument h n'est pas un nombre flottant	
}

printf("%f\n", somme);
//-1.8
return 0;

}

