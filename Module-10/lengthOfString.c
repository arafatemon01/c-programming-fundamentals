// #include <stdio.h>
// int main(){
//    char s[101];
//    scanf ("%s",s);
//    int count = 0;
//    for (int i=0;s[i]!= '\0';i++){
//        count++ ;

//    }
//    printf ("length = %d",count);
//    return 0;
// }


#include <stdio.h>
int main(){
   char s[101];
   scanf ("%s",s);
   int a = strlen (s);
   printf ("length = %d",a);
return 0;
}