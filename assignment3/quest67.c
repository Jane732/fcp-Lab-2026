#include<stdio.h>
//only for distinct values
float largest(float a[],int n){
    int max=a[0];
    for (int i = 0; i < n; i++)
    {
        if (a[i]>max)
        {
            max=a[i];
        }
        
    } return max;
    
}
int main()
{
    float a[5];
    printf("enter the array elements: ");
    for (int i = 0; i < 5; i++)
    {
        scanf("%d",a[i]);
    }
    printf("the max element is %d",largest(a,5));
}   