#include <stdio.h>
int main()
{
    int n;
    scanf("%d", &n);
    int arr[n];
    for (int i = 0; i < n; i++)
    {
        scanf("%d", &arr[i]);
    }
    if (n % 2 == 0)
    {
        for (int i = n; i > 0; i--)
        {
            if (i % 2 == 1)
            {
                printf("%d ", arr[i]);
            }
        }
    }
    else if (n % 2 == 1)
    {
       for (int i = n-1;i>0;i--){
        if (i % 2 == 1){
        printf ("%d ",arr[i]);}
    }}
    return 0;
}