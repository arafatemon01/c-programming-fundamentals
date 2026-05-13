#include <stdio.h>
int main(){
   long long int n;
   scanf ("%lld",&n);
   int arr[n];
   for (int i = 0;i<n;i++){
    scanf ("%d",&arr[i]);
   }
   for (int i= 0;i<n;i++){
    if (arr[i]>0){
        arr[i] = 1;
    }else if (arr[i]<0){
        arr[i] = 2;
    }
    printf ("%d ",arr[i]);
   }
return 0;
}