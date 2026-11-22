#include<stdio.h>
int prime(int n){
    int isPrime=1;
    for (int i = 2; i < n; i++)
    {
        if(n%i==0){isPrime=0; break;}
    }
    if (isPrime==1)
    {
        return 1;
    } else return 0;
    
    
}
int main()
{
    int n;
    printf("enter a no: ");\
    scanf("%d",&n);
    printf("%d",prime(n));
}