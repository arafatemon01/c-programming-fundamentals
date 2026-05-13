#include <stdio.h>
int main(){
   int N;
   int M;
   int even = 0, odd= 0, positive =0,negative =0;
   scanf ("%d",&N);
   for (int i = 1;i<=N;i++){
     scanf ("%d",&M);
    if (M % 2 == 0){
      even++;
    }else{
      odd++;
    }
    if (M>0){
      positive ++;
    }else if (M<0){
      negative++;
    }
   }
  printf("Even: %d\n",even);
  printf("Odd: %d\n",odd);
  printf("Positive: %d\n",positive);
  printf("Negative: %d\n",negative);
   
return 0;
}