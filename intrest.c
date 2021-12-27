# include <stdio.h>
int main()
{
    int p,n;
    float r,si;
    printf("Enter values of p,n,r");
    scanf("%d%d%f",&p,&n,&r);
    /*p=1000;
    n=3;
    r=8.5;*/
    si=p*n*r/100;
    printf("%f\n", si);
    return 0;

}