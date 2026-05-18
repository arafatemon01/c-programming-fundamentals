#include <stdio.h>
int main(){
    int n;
    scanf ("%d",&n);
    int k =1;
    int space = n-1;
    for (int i=1;i<=n;i++){
       for (int j=space;j>=1;j--){
        printf (" ");
       }
        for (int j=1;j<=k;j++){
            printf ("*");
        }
        space--;
        k=k+2;
        printf ("\n");
    }
    return 0;
}