#include <stdio.h>
#include <stdlib.h>

#include "file.h"

int main(){
    File f = creer_file();
    elem a,b;
    a.id =0;
    a.prio =10;
    a.id =1;
    a.prio = 3;
    f = enfile(f,a);
    f = enfile(f,b);
    affiche_file(f);
    elem res = defile(&f);

    

    return 0;
   
}
