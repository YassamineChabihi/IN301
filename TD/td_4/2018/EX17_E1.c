#include <stdio.h>
#include <stdlib.h>


int test(char*s){
	int i=0;
	if(s[0] == '-')i++;
	int cp = 0;
	int cc = 0;
	int taille = strlen(s);
	while(i<taille){
		if(isdigit(s[i]))cc++;
		else if(s[i] =='.')cp++;
		else return 0;
		
	} i++;
	if(cc == 0 || cp>1)return 0;
	return 1;
}		
		

int main(int argc, char **argv){
	double res=0;
	int i;
	for(i=1;i<argc;i++){
		//test(...)==0
		//res += atof(argv[i]);
		//(res = res + atof(argv[i]);)
		if(!test(argv[i])){
			printf("erreur %s\n",argv[i]);
			exit(0);
		}
	}
	printf("%f\n",res);
}
	


