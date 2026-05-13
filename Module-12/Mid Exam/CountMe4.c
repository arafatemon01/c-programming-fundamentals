#include <stdio.h>
#include <string.h>
int main(){
   char s[10001];
   scanf ("%s",s);
   int len= strlen (s);
   int frequency [26] = {0};

   for (int i= 0;i<len;i++)
   {
     int value = s[i] - 'a';
     frequency [value]++;
   }
   for (int i= 0;i<26;i++)
   {
    if (frequency[i]>0)
    {
        printf ("%c - %d\n",i+'a',frequency[i]);
    }
   }
return 0;
}