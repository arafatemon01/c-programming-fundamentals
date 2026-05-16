#include <stdio.h>
int my_abs (int a){
    if (a<0){
        a= a* -1;
    }
    return a;
}
int main(){
   int n;
   scanf ("%d",&n);
   int value=my_abs (n);
   printf ("%d\n",value);
return 0;
}