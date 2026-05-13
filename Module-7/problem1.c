// Take an array from input and print all the even numbers of that array.

#include <stdio.h>
int main()
{
    int n;
    scanf("%d", &n);
    int arr[n];
    for (int i = 0; i < n; i++)
    {
        scanf("%d", &arr[i]);
        printf("%d ", arr[i]);
    }
    
        return 0;
}