#include <stdio.h>
int sum(int a, int b){
   int  ans = a+b;
   return ans;
}
int main(){
   int num1,num2;
   scanf ("%d %d",&num1,&num2);
   int value = sum(num1,num2);
   printf (" value sum is : %d",value);
return 0;
}