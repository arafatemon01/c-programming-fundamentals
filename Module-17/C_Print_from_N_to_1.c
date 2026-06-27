#include <stdio.h>
void Recursion (int a){
if (a==0){
    return;
}
printf ("%d",a);
if (a>1){
    printf (" ");
}
Recursion (a-1);
}
int main(){
   int n;
   scanf ("%d",&n);
   Recursion (n);
return 0;
}