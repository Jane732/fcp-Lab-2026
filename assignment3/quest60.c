#include<stdio.h>
void evenOdd(int n){if(n%2==0){printf("the no is even");}
else{printf("the no is odd");}
}

int main()
{
    int n;
    printf("enter a no: ");
    scanf("%d",n);
    evenOdd(n);
}