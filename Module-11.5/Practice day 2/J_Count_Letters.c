#include <stdio.h>
int main(){
     static char s[10000010]; 
   fgets(s, sizeof(s), stdin);
   int frequency [26] ={0};

  for (int i=0;s[i] != '\0';i++){
    if (s[i]>='a' && s[i]<='z'){
    int index= s[i]-'a';
    frequency [index]++;
  }}
  for (int i= 0;i<26;i++){
    if (frequency[i]>0){
        printf ("%c : %d\n",i+'a',frequency[i]);
    }
  }
return 0;
} 