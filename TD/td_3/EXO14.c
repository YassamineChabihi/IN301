#include <stdio.h>
#include <stdlib.h>



void echange (int *a, int *b) {
    int *temp;
    temp = a;
    a = b;
    b = temp;
}

int main( int argc, char** argv){
    int a=10;
	int b=20;
    printf ("%d %d\n", a, b);
	echange (&a, &b);
	printf ("%d %d\n", a, b);

    return 0;
}
