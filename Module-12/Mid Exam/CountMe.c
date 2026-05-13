#include <stdio.h>
int main(){
   int N;
   scanf ("%d",&N);
   int arr[N];
   int divided2=0, divided3=0;
   for  (int i= 0;i<N;i++){
    scanf ("%d",&arr[i]);
   }
   for (int i=0;i<N;i++){
     if (arr[i] % 2 == 0){
        divided2 ++;
     }else if (arr[i]%2==0 && arr[i]%3 == 0){
        divided2 ++;
     }else if (arr[i] %3 == 0){
        divided3 ++;
     }
   }printf ("%d %d",divided2,divided3);
return 0;
}