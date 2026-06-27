#include <stdio.h>
void Recursion (int i){
    if (i==0){
        return;
    }
  Recursion (i-1);
  printf ("%d\n",i);  
}
int main(){
   int n;
   scanf ("%d",&n);
Recursion (n);
return 0;
}