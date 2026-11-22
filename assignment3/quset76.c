#include<stdio.h>
int main()
{
    char st[20];
    printf("enter a string: ");
    gets(st);
    int left=0,right=strlen(st)-1;
    char temp;
    while(left<right)
    {
        temp=st[left];
        st[left]=st[right];
        st[right]=temp;
    }
    left++;
    right--;
}