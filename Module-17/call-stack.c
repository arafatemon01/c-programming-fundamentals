#include <stdio.h>
void mallo(){
    printf ("Mello\n");
}
void gallo (){
    printf ("Gello\n");
  mallo();
}
void hello (){
    printf ("Hello\n");
    gallo();
}
int main(){
   printf ("Hi\n");
   hello();
return 0;
}