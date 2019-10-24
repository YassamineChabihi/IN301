#include <stdio.h>
#include <stdlib.h>
#include <string.h>

int main(int argc,char** argv){
int i;
printf("argc = %d\n", argc);
for(i=0 ; i<argc ; i++)
printf("%s\n", argv[i]);
return 0;
}


/*int main(int argc,char** argv){
int i;
printf("argc = %d\n", argc);
for(i=0 ; i<argc ; i++)
printf("%s\n", argv[i]);
return 0;
}

int main()
{
    char a[10] = "./testarg 6.2 -8 2.0";
    float pi = atof(a);
    printf("Value of pi = %f\n", pi);
    return 0;
}
*/
