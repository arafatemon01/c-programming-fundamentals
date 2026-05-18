#include <stdio.h>
int main(){
   int n;
   int k= 1;
   scanf ("%d",&n);

   int space = n-1;
   for (int i=1;i<=n;i++){
    if (i%2 != 0){
          for (int j = space;j>0;j--){
        printf (" ");
      }
    for (int j=1;j<=k;j++){
    printf ("#");
   
    } 
      space--;
    k=k+2;
    printf ("\n");
    } if (i % 2 == 0){

  for (int j = space;j>0;j--){
        printf (" ");
      }
    for (int j=1;j<=k;j++){
    printf ("-");
   
    } 
      space--;
    k=k+2;
    printf ("\n");

    }
    
                     }  
                     
    space = 1;
     k = 2* (n-1)-1;
    for (int i=1;i<=n-1;i++){

        if ((n+i)%2 != 0){

 for (int j=1;j<=space;j++){
            printf (" ");
        }
      for (int j=1;j<=k;j++){
        printf ("#");
      }  
      printf ("\n");
      space++;
      k = k-2;
 
        } if ((n+i)%2 == 0){

 for (int j=1;j<=space;j++){
            printf (" ");
        }
      for (int j=1;j<=k;j++){
        printf ("-");
      }  
      printf ("\n");
      space++;
      k = k-2;

        }

       
       }
    
   
return 0;
}