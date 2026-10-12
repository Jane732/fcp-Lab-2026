#include <stdio.h>
int main()
{
    // 
    int n,fact=1;
    float sum=0.0;
    printf("Enter a positive integer: ");
    scanf("%d",&n);
    for(int i=1;i<=n;i++){
        fact=fact*i;
        sum=sum+ (float)i/fact; //explicit type conversion from int to float value
        printf("%d/%d + ",i,fact);
    }
    printf("the sum is %.2f",sum);
}