#include<stdio.h>
#include<math.h>
int armstrong(int n){
    int temp=n,count=0,ldigit,sum=0;
    while(temp>0)
    {temp=temp/10; 
        count++;}
    temp=n;
    while(temp>0)
    {
        ldigit=temp%10;
        int power=1;
        for(int i=1;i<=count;i++){power=power*ldigit;}
        sum=sum+power;
        temp=temp/10;
    }
    if(sum==n){return 1;}
    else{return 0;}
}
int main()
{
    int n;
    printf("enter a no: ");
    scanf("%d",&n);
    if(armstrong(n)==1){printf("the no is an amstrong no");}
    else {printf("the no is not an armstrong no");}

}