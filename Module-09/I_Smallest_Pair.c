#include <stdio.h>
#include <limits.h>

int main(){
    int test_case;
    scanf ("%d",&test_case);
    for (int t = 0;t<test_case;t++){
        int n;
        scanf ("%d",&n);
        int arr[n+1];
        for (int i=1;i<=n;i++){
            scanf ("%d",&arr[i]);
        }
        int min = INT_MAX;
        for (int i = 1;i<=n;i++){
            for (int j= i + 1;j<=n;j++){
              if(arr[i]+ arr[j]+ j-i < min){
                min = arr[i]+ arr[j]+ j-i   ;
              }
            }
        }
        printf ("%d\n",min);
    }
return 0;
}