#include <stdio.h>
int sumDigit(int n){
    if(n==0){return 0;}
    return n%10 + sumDigit(n/10);
}
int main()
{
    int n;
    printf("enter a no: ");
    scanf("%d",n);
    while(n>=10){
        int sum=0;
        while(n>0){
            sum=sum+n%10;
            n=n/10;
        }
        n=sum;
    }
    printf("the single digit sum is %d",n);
}