#include <stdio.h>
int main(){
int n;
printf("Enter the value of n\n");
scanf("%d",&n);
if (n%2000 == 0)
printf("no of 2k notes is %d\n", n/2000);
else if (n%1000 == 0)
printf("no of 1k note is %d\n", n/1000);
else if (n%500==0)
printf("no of 500 notes is %d\n" ,n/500);
else if (n%100 == 0)
printf("no of 100 notes is %d\n", n/100);
   return 0;
}