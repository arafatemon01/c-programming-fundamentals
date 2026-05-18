#include <stdio.h>
int main (){
    int n;
    scanf ("%d",&n);
    int k=1;
    int space =n-1;
    for (int i=1;i<=n;i++){
         for (int j=space;j>=1;j--){
            printf (" ");
         }
        for (int j=1;j<=k;j++){
            printf ("*");
        } 
        space --;
        k=k+2;
        printf ("\n");
    }
     
    int star= 2*n-1;
    space = 0;

    for (int j = 1;j<=n;j++ ){
        for (int k = 1;k<=space;k++){
            printf (" ");
        }
      for (int k = 1;k<=star;k++){
        printf ("*");
      }
      printf ("\n");  
      star = star - 2;
      space ++;
      
    }    

    return 0;
}