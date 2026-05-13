// Take a number from user and check if its a positive or negative number.
#include <stdio.h>
int main()
{
    int number;
    printf("Enter your number : ");
    scanf("%d", &number);
    if (number >= 0)
    {
        printf("you enter positive number.");
    }
    else
    {
        printf("you enter negative number.");
    }
    return 0;
}