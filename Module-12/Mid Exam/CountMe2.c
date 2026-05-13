#include <stdio.h>
#include <string.h>
int main(){
   char s[100001];
   scanf ("%s",s);
   int len_s = strlen(s);
    int countCons = 0;
   for (int i=0;i<len_s;i++)
   {
    if (s[i]=='a'|| s[i]=='e' || s[i] == 'i'||s[i] == 'o'||s[i]== 'u'){
        
    }else {
        countCons++;
    }
   }
  
 printf("%d",countCons);
return 0;
}