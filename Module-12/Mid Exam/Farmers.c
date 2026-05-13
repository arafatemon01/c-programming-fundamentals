#include <stdio.h>
int main(){
   int t;
   scanf ("%d",&t);    // number of test case.
   for ( int i=0;i<t;i++){
    int farmer,addfarmer,days;    // given data mean 10 farmer work 15 days
    scanf ("%d %d %d",&farmer,&addfarmer,&days);
    int totalFarmer = farmer + addfarmer;
    int totalday = (days * farmer)/totalFarmer;
     // print days of different.
   printf ("%d\n",days-totalday);
   }
return 0;
}