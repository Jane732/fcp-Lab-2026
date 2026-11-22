#include<stdio.h>
int factorial(int n){int fact=1;
for (int  i = 1; i <=n; i++)
{
    fact=fact*i;
}
return fact;
}
int main()
{
    int n,c,r;
    printf("enter a n c and r: ");
    int nCr= factorial(n)/(fact(r)*fact(n-r));
    printf("the value of nCr is %d",nCr);
}