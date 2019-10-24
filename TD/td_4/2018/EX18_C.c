

#include <stdio.h>
#include <stdlib.h>

//strcmp(char* s1,char* s2)
/*
	TABINT gen_alea_tabint (int N, int k)
      { int i;
	 for(i=0;i<k;i++) {
		    printf("%d\n",t[i]); }

*/
int compare(char* s1,char* s2){
	while(*s1!='\0' &&  *s2 != '\0' ){
		if(*s1 > *s2 ) return 1;
		//if(s1[i] > s2[i])
		//char* s1
		//char (*s1)
		/*
		 ./EX18_C.out 3444 3344
			3444 ,3344 ,1 
		*/
		if(*s1 < *s2 ) return -1;
		/*
		 ./EX18_C.out 3344 3444
			3344 ,3444 ,-1 
		*/
		s1++;
		s2++;
	}
	if(*s1 == '\0'){
		if(*s2 == '\0' ) return 0;
		/*
		 ./EX18_C.out 3344 3344
			3344 ,3344 ,0 
		*/
		else return -1;
		/*
		 ./EX18_C.out 3344 33445
			3344 ,33445 ,-1 
		*/
	}
	return 1;
	/*
	 ./EX18_C.out 33445 3344
		33445 ,3344 ,1 
	 */
}

		    
int main(int argc, char** argv)
{
	int i;
	for(i=1 ; i<argc-1 ; i++)
	printf("%s ,%s ,%d \n",argv[i],argv[i+1],compare(argv[i],argv[i+1]));

	return 0;
}

