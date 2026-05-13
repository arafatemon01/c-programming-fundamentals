#include <stdio.h>
int sum(){
       int num1,num2;
   scanf ("%d %d",&num1,&num2);
    int ans = num1 + num2;
    return ans;
}
int main(){

   int value= sum();
   printf (" value is : %d",value);
return 0;
}