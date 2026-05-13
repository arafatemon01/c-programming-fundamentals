#include <stdio.h>
int main(){
   int N,M;
   scanf ("%d %d",&N,&M);
   int A[N];
   for (int i= 0;i<N;i++){
    scanf ("%d",&A[i]);
   }
   int frequency [100001]= {0};

   for (int i= 0;i<N;i++){
    int val= A[i];
    frequency[val]++;
   }
  for (int i=0;i<M;i++){
    printf ("%d\n",frequency[i+1]);
  }
return 0;
}