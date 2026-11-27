#include<stdio.h>
int fib(int n)
{
    if(n==1)return 0;
    if(n==2)return 1;
    return fib(n-1)+fib(n-2);
}
void print(int n)
{
    for (int i = 1; i <=n; i++)
    {
        printf("%d ",fib(i));
    }
    
}
int main()
{
    print(5);
    printf("\n");
    print(10);
    printf("\n");
    print(15);

}