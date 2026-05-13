// Take a number from user and check if its a even number or odd number.

#include <stdio.h>
int main (){
   int number;
   printf ("Enter Your number : ");
   scanf ("%d",&number);
   if (number % 2 == 0){
      printf ("Your entered even number.\n");
   }else{
    printf ("you entered odd number.");
   }
   return 0;
}