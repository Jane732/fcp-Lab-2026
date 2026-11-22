#include<stdio.h>
#include<string.h>
void convert(char st[])
{
    int i=0;
    while(st[i]!='\0')
    {
        if(st[i]>='A'&& st[i]<='Z')
        {
            st[i]=st[i]+32;
        } i++;
    }
}
int main()
{
    char st[20];
    gets(st);
    convert(st);
    char temp;
    for (int i = 1; i <= strlen(st)-1; i++)
    {
        for (int j = 0; j <= strlen(st)-2-(i-1); j++)
        {
                if(st[j]>st[j+1])
                {
                    temp=st[j];
                    st[j]=st[j+1];
                    st[j+1]=temp;
                }
        }
    }
    int i=0;
    while(st[i]!='\0')
    {
        printf("%c",st[i]);
    }
}