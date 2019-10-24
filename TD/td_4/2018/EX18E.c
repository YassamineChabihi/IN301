
#include <stdio.h>
#include <stdlib.h>

int compare(char* s1,char* s2){
	while(*s1!='\0' &&  *s2 != '\0' ){
		if(*s1 > *s2 ) return 1;
		if(*s1 < *s2 ) return -1;
		s1++;
		s2++;
	}
	if(*s1 == '\0'){
		if(*s2 == '\0' ) return 0;
		else return -1;
	}
	return 1;
}
