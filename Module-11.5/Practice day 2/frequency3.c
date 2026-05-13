#include <stdio.h>
int main(){
   int n;
   scanf ("%d",&n);
   int arr[n];
   for (int i=0;i<n;i++){
    scanf ("%d",&arr[i]);
   }
//    int count0 = 0, count1 = 0, count2 = 0;
//    printf (" count1 = %d",count1);
    int frequency[10] = {0};
   for (int i=0;i<n;i++){
    
     int val = arr[i];
     frequency [val]++;

   }for (int i= 0;i<6;i++){
    printf ("%d -> %d\n",i,frequency[i]);
   }
return 0;
}