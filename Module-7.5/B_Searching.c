#include <stdio.h>
int main(){
   int n;
   scanf ("%d",&n);
   int arr[n];
   for (int i=0;i<n;i++){
    scanf ("%d",&arr[i]);
   }
   int find;
   scanf ("%d",&find);
   int idx = -1;
   //searching
   for(int i= 0;i<n;i++){
    if (arr[i] == find){
        idx = i;
        break;
    }
   }
   printf("%d",idx);
return 0;
}