#include <stdio.h>
void Recursion (int i){
    if (i == 0){
        return;
    }
    printf ("I love Recursion\n");
    Recursion (i-1);
}
int main(){
   int n;
   scanf ("%d",&n);
   Recursion(n);
return 0;
}