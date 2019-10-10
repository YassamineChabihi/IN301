




// liste.c


// liste chainee
struct liste{ 
    int val;
    struct liste * suiv;
};

int main(){
    
    struct liste *deb;
    struct liste *new;

    deb = NULL;
    int i;

    for( i = 0; i < 1000; i++)
    {
        new = malloc(sizeof(struct liste));
        (*new).val = i;
        (*new).suiv = deb;
        deb = new;
    }
    

/*

    truct liste *deb;
    struct liste *new;

    
    new = malloc(sizeof(struct liste));
    (*new).val = 12;
    (*new).suiv = NULL;
    deb = new;

    new = malloc(sizeof(struct liste));
    (*new).val = 13;
    (*new).suiv = deb;
    deb = new;

    new = malloc(sizeof(struct liste));
    (*new).val = 123;
    (*new).suiv = deb;
    deb = new;
*/






    //struct liste a,b,c;
    //a.val = 12;
    //a.val = 12;
    //a.suiv = &b;
    //b.val = 43;
    //b.suiv = &c;
    //c.val = -17;
    //c.suiv = NULL;
    

}

