#include<stdio.h>
int main()
{
    for (int i = 1; i <=5; i++)
    {
        for(int j=5;j>=i;j--){printf("%d\t",j);}
        if(i>1){for(int k=1;k<=2*(i-1)-1;k++){printf("\t");}}
        for(int j=i;j<=5;j++)
        {if(j==1)continue;
        else{printf("%d\t",j);}
        }
        printf("\n");
    }
    
    }