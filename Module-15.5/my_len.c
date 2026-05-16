#include <stdio.h>
char my_len (char s[]){
    int count = 0;
   for (int i= 0; s[i]!='\0';i++){
         count ++;
   }
   return count;
}
int main(){
   char s[100];
   scanf ("%s",s);
int len = my_len (s);
printf ("%d",len);
return 0;
}