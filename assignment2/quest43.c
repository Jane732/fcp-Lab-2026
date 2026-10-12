#include<stdio.h>
int main()
{
    int a[10];
    printf("enter 10 integers: ");
    for (int i = 0; i < 10; i++)
    {
        scanf("%d",&a[i]);
    }
    int sum=0;
    for (int i = 0; i < 10; i++)
    {
        sum=sum+a[i];
    }
    printf("the sum of elements of the array is %d",sum);
    
    
}