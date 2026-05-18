#include <stdio.h>
void evenOdd (int a){
    if (a%2==0){
        printf ("Even");
    }else {
        printf ("Odd");
    }
}
int main (){
int num;
scanf ("%d",&num);
evenOdd (num);
}