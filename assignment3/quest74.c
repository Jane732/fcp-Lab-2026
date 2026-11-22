#include<stdio.h>
int main()
{
    char str1[10],str2[10];
    char ch;
    int i=0;
    printf("enter string 1: ");
    while((ch=getchar())!='\n'){str1[i]=ch; i++;}
    str1[i]='\0';
    
    i=0;
    printf("enter string 2: ");
    while((ch=getchar())!='\n'){str2[i]=ch; i++;}
    str2[i]='\0';

    char str3[20];
    i=0;
    while(str1[i]!='\0'){str3[i]=str1[i]; i++;}
    str3[i]=' ';
    i++;
    int j=0; 
    while(str2[j]!='\0'){str3[i]=str2[j]; j++; i++;}
    str3[i]='\0';
    printf("the combined string is %s",str3);   
}