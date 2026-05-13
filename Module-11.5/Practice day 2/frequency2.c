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
    if (arr[i] == 1)
    {
        frequency[0]++;
    }else if (arr[i]==2)
    {
        frequency[1]++;
    }else if (arr[i]==3)
    {
        frequency[2] ++;
    }
  
   } printf ("%d -> %d\n",1,frequency[0]);
    printf ("%d -> %d\n",2,frequency[1]);
    printf ("%d -> %d\n",3,frequency [2]);
return 0;
}