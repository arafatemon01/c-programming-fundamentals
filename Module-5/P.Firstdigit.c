#include <stdio.h>
int main(){
   int X;
   scanf ("%d",&X);
   for (int i = 1;i<=X; i++){
      if (X>= 10){
      X = X / 10;}
   }
   if (X % 2 == 0){
    printf ("EVEN");
   }else{
    printf ("ODD");
   }
return 0;
}