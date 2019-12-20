#include "distance.h"
#include <stdio.h>
#include <stdlib.h>


int Distance(char a,char b){
    if(a==b)
        return 0;
    return 1;
    }
     
int min(int a,int b,int c){
    if(a==b && a==c)
        return a;
    if(a<=b && a<=c)
        return a;
    if(b<=a && b<=c)
        return b;
    return c;
    }
     
int DistanceMinRec(char* a,char* b){
 
    int n=strlen(a);
    int m=strlen(b);
 
    if(n==0 && m==0)
        return 0;
    if(n==0)
        return m;
    if(m==0)
        return n;
     
    char* a2=strndup(a,n-1);
    char* b2=strndup(b,m-1);
 
    return min( DistanceMinRec(a2,b) +1,
                DistanceMinRec(a2,b2)+ Distance(*(a+n-1),*(b+m-1)),
                DistanceMinRec(a,b2) +1
                );
 
}

int DistanceMinIter(char* a,char* b){
 
    i,j;
    int n=strlen(a);
    int m=strlen(b);

    char m1[n];
    char m2[m];

    //int M[n+1][m+1];
    int* M=(int *)malloc((n+1)*(m+1)*sizeof(int));
    int val;
    int resultat=0;
    // Initialisation de la 1ère ligne et colonne du tableau
 
    for(i=0;i <=n ; i++){
        //M[i][0]=i;
        *(M + i*(m+1))=i;
        }
    for(j=0;j <=m ; j++){
        //M[0][j]=j;
        *(M+j)=j;
        }
         
    // Calcul Iteratif des cases du tableau à partir de celles deja calculés avant
    for(i=1;i <=n ; i++){
        for(j=1 ; j<=m ;j++){
            // val=Distance(*(a+i-1),*(b+j-1));
            //M[i][j]= min(M[i-1][j]+1,M[i-1][j-1]+val,M[i][j-1]+1);
            // *(M + i*(m+1) + j)=min(*(M +(i-1)*(m+1) + j) +1, *(M +(i-1)*(m+1) + (j-1))+val, *(M +i*(m+1) + (j-1)) +1);

            if(m1[i] == m2[j]){
                *(M + i*(m+1) + j) = *(M +(i-1)*(m+1) + (j-1));
            }
            else{
                *(M + i*(m+1) + j) = min(*(M +(i-1)*(m+1) + (j-1)), *(M +(i-1)*(m+1) + j), *(M +i*(m+1) + (j-1))) + 1;
            }

        }
        printf("\n");
    }
    //On renvoi M[n][m]=D(n-1,m-1)
    //return M[n][m];
    resultat= *(M + n*(m+1) +m);
    free(M);
 
    return resultat;
 
}
