#include<stdio.h>
int main()
{
    char string[]="lily";
    int i=0, len=0;
    while(string[i]!='\0'){len++; i++;}
    printf("the legnth of the string is %d",len);
}