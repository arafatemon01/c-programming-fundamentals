#include <stdio.h>
#include <string.h>
int main(){
   int N;
   scanf ("%d",&N);
   for (int i= 0;i<N;i++){
    char S[55],T[55];
    scanf ("%s %s",S,T);
    int len_s = strlen(S);
    int len_t = strlen (T);
    int i;
    for ( i=0;i<len_s && i<len_t;i++){
        printf ("%c%c",S[i],T[i]);
    }
    if (i<len_s){
        for ( ;i<len_s;i++){
            printf ("%c",S[i]);
        }
    }if (i<len_t){
        for ( ;i<len_t;i++){
            printf ("%c",T[i]);
        }
    }printf ("\n");
   }
return 0;
}