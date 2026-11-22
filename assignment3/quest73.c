#include<stdio.h>
int main()
{
    char str1[10],str2[10];
    char ch;
    int i=0;
    printf("enter string 1: ");
    while((ch=getchar())!='\n'){str1[i]=ch;
                                        i++;
                                    }
    str1[i]='\0';
     i=0;
    while(str1[i]!='\0'){str2[i]=str1[i]; printf("%c",str2[i]); i++;}
    str2[i]='\0';
    printf("\n%s",str2);
}