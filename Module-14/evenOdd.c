#include <stdio.h>
void evenOdd (){
    int n;
    scanf ("%d",&n);
    if (n%2 == 0){
        printf ("this is even number.");
    }else {
        printf ("this is odd number.");
    }
}
int main (){
evenOdd();
}