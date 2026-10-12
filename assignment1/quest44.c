#include<stdio.h>
int main()
{
    int n;
    float total;
    printf("enter the no of units: ");
    scanf("%d",n);
    if(n>0&&n<200){total= n*0.5;}
    else if(n>200&&n<400){total= (n-200)*0.65 + 100;}
    else if(n>400&&n<600){total= (n-400)*0.8 + 230;}
    else if(n>600){total= (n-600)*125 + 425;}
    else{printf("units not valid");}
}