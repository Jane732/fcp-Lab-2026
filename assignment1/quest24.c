#include<stdio.h>
int main()
{
    float x,n;
    printf("enter x an n: ");
    scanf("%f %f",&x,&n);
    if(n==1){x=1+x;}
    else if(n==2){x=1+x/n;}
    else if(n==3){x=1+x*x*x;}
    else if(n>3||n<1){x=1+n*x;}
    else{printf("not valid");}
    printf("value of function is %f",x);
}