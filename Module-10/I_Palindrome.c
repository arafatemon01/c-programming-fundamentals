#include <stdio.h>
int main(){
    char S[1001];
     scanf ("%s",S);
     int len = strlen (S);
     int flag =1;
     for (int i=0, j=len-1; i<j ; i++,j--){
        if (S[i] != S[j]){
            flag = 0;
            printf ("NO");
            break;
        }
     }if (flag == 1){
        printf ("YES");
     }
return 0;
}