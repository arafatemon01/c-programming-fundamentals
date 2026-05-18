#include <stdio.h>
int main(){
    int n;
    scanf ("%d",&n);
    int k=n;
    int space =0;
    for (int i=1;i<=n;i++){
        for (int j=1;j<=space;j++){
            printf (" ");
        }
        for (int j=k;j>0;j--){
            printf ("* ");
        }
        space++;
        k--;
        printf ("\n");
    }
}