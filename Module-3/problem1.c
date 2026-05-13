// Write a c program to print 8’s time table to 200
#include <stdio.h>
int main (){
    int N = 8;
    for (int i = 1; i<=200;i++){
        if (i*8 <= 200){
            printf ("8 * %d = %d\n ",i,i*N);
        }else{
           break;
        }
    }
}
