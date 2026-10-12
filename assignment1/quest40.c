#include<stdio.h>
int main()
{
    int n,sum=0;
    do{
        printf("enter an integer: ");
        scanf("%d",&n);
        if(n>=0){sum=sum+n;}

        
        else{printf("you enetered a ngetaive no\n"); break;}
    }
    while(n>0);
    printf("the sum of positive nos entered is %d and the negative no entered is %d",sum,n);
}