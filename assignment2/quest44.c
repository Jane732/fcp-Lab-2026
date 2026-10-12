#include<stdio.h>
int main()
{
    int a[10];
    printf("enter 10 integers: ");
    for (int i = 0; i < 10; i++)
    {
        scanf("%d",&a[i]);
    }
    int odd=0,even=0;
    for (int i = 0; i < 10; i++)
    {
        if(a[i]%2==0){even++;}
        else{odd++;}
    }
    printf("the no of odd and even nos is %d and %d",odd,even);
}