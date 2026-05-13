// Write a c program to print 8’s time table to 200
#include <stdio.h>
int main (){
    int N;
    for (int i = 1; i*8<=200; i++){
        printf (" 8 * %d = %d\n",i,i*8);
    }return 0;
}