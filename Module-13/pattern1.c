#include <stdio.h>
int main(){
    int n;
    int k=1;
    scanf ("%d",&n);
    int space = n-1;

    for (int i=1;i<=n;i++){
        for (int j=space;j>0;j--){
            printf (" ");
        }
        for (int j= 1;j<=k;j++){
            printf ("* ");
        }
        space--;
        k++;
        printf ("\n");
    }
}