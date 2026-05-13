// smallest lexicographical one.

#include <stdio.h>
int main(){
   char X[25],Y[25];
   scanf ("%s %s",X,Y);
   int i= 0;
   while(1){
    if (X[i] == '\0' && Y[i] == '\0'){
        printf("Equal");
        break;
    }else if (X[i] == '\0'){
        printf("X is smaller");
        break;
    }else if (Y[i]=='\0'){
        printf("Y is smaller");
        break;
    }else if (X[i]>Y[i]){
        printf ("Y is smaller");
        break;
    }else if (X[i]< Y[i]){
        printf("X is smaller");
        break;
    }else if (X[i]==Y[i]){
        i++;
    }
      
   }
return 0;
}