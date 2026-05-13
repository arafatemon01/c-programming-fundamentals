#include <stdio.h>
#include <string.h>
int main(){
   int t;
   scanf ("%d",&t);
    char s[10001];
   for (int i=0;i<t;i++){
    scanf ("%s",s);
   
   int countCap=0,countSmall=0,countDigit=0;
   int len_s = strlen(s);
   for (int i=0;i<len_s;i++){
    if (s[i]>='a' && s[i]<='z'){
        countSmall++;
    }if (s[i]>='A' && s[i]<='Z'){
        countCap ++;
    }
    if (s[i]>= '0' && s[i]<='9'){
        countDigit++;
    }

   }
   printf ("%d ",countCap);  
   printf ("%d ",countSmall);
   printf ("%d\n",countDigit);
}
return 0;
}