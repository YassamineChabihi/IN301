
#include <stdio.h>
#include <stdlib.h>



int compareR(char* s1,char* s2)
{
	while(*s1!='\0' &&  *s2 != '\0' )
		{
		 if(*s1 < *s2 )
			 {
			 return -1;
			 }
		 else if(*s1 > *s2 )
			 {
			 return 1;
			 } 
		 return compareR(s1+1, s2+1);	 
		}
 if(*s1 == '\0')
		{
			if(*s2 == '\0' ) return 0;
			else return -1;
		}
	return 1;
}	
		    
int main(int argc, char** argv)
{
	int i;
	for(i=1 ; i<argc-1 ; i++)
	printf("%s ,%s ,%d \n",argv[i],argv[i+1],compareR(argv[i],argv[i+1]));

	return 0;
}


