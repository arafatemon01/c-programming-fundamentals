#include <stdio.h>
int main(){
    int A,B,C;
    char sing, eq;
    scanf ("%d %c %d %c %d",&A,&sing,&B,&eq,&C);
   int ans;
   if (sing == '+'){
    ans = A+B;
   }else if (sing == '-'){
    ans = A-B;
   }else if (sing == '*'){
    ans = A*B;
   }

   if (ans == C){
    printf ("Yes");
   }else {
    printf ("%d",ans);
   }

}