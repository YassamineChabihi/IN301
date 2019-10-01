#include <stdlib.h>
#include <stdio.h>
#include <sys/types.h>
#include <unistd.h>


int main()
{
    srand(getpid());
    int a;
    
    for(int i=0; i<1000; i++)
    {
        a = rand()%1000;
        printf("%d\n",a);
    }
}