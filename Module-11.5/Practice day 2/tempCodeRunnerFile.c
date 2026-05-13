#include <stdio.h>
int main (){
    char string [10001];
    scanf ("%s",string);
    int frequency [26] = {0};
    for (int i= 0;string [i] != '\0';i++){
        int index = string[i] - 'a';
        frequency[index]++;
    }
    for (int i= 0;i<26;i++){
        if (frequency[i]>0){
            printf ("%c : %d\n",i+'a',frequency[i]);
        }
    }
    
}