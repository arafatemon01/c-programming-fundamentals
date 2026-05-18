#include <stdio.h>
void Max_and_min (int arr[],int n){
    int max = arr[0];
    int min = arr[0];
    for (int i=0;i<n;i++){
        if (arr[i] > max){
           max = arr[i];
        }else if (arr[i]<min){
            min = arr[i];
        }
    }
    printf ("%d ",min);
    printf ("%d",max);
}
int main (){
int n;
scanf ("%d",&n);
int arr[n];
for (int i=0;i<n;i++){
    scanf ("%d",&arr[i]);
}
Max_and_min (arr,n);

}