#include<stdio.h>
#include<string.h>
int main()
{
    char st1[10],st2[10];
    printf("enter string 1: ");
    gets(st1);
    printf("enter string 2: ");
    gets(st2);
    int l1= strlen(st1);
    int flag=0;
    int i;
    for( i = 0; i < l1; i++)
    {
        if(st1[i]==st2[i]){flag=1;}
        else{break;}
    }
    if(flag==1){if(st2[i]='\0')printf("strings are equal");
                else printf("strings are nit equal");}
                else{printf("strings are not equal");}
}