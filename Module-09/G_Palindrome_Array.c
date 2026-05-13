#include <stdio.h>
int main(){
   int n;
   scanf ("%d",&n);
   int arr[n];
   for (int i= 0;i<n;i++){
    scanf ("%d",&arr[i]);
   } int flug = 1;
   for (int i=0,j=n-1;i<j;i++,j--){
      if (arr[i] != arr[j]){
         printf ("NO");
         flug = 0;
         break;
      }
   }if (flug == 1){
   printf ("YES");}
   
return 0;
}