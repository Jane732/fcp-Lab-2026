#include<stdio.h>
int main()
{
    int a[10];
    printf("enter 10 nos: ");
    for (int i = 0; i < 10; i++)
    {
        scanf("%d",&a[i]);
    }
    int pos=0,neg=0,zero=0;
    for (int i = 0; i < 10; i++)
    {
        if (a[i]>0) { pos++; }
        else if(a[i]<0){neg++;}
        else{zero++;}
    }
    printf("the no of positive negative and zero elements is %d %d %d ",pos,neg,zero);
    
}