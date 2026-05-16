#include <stdio.h>
void hello (){
    printf ("Hello\n");
    hello();   // this is the infinite loop
}
int main(){
   printf ("HI\n");
   hello ();
return 0;
}