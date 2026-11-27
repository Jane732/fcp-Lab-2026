#include<stdio.h>
#include<string.h>
#include<stdlib.h>
struct record
{
    char *title;
    char *author;
    char *publisher;
    int id;
    
};
char *getname(char prompt[])
{
    char *temp;
    char ch; 
    int size=10;
    int i=0;
    temp=(char*)calloc(size,sizeof(char));
    printf("%s",prompt);
    while((ch=getchar())!='\n')
    {
        if(size-i==1)
        {
            size =size*2;
            char *cptr;
            cptr=realloc(temp,size*sizeof(char));
            if(cptr==NULL){printf("memory allocation failed\n"); return NULL;}
            temp=cptr;
        }
        temp[i]=ch;
        i++;
    }temp[i]='\n';
    return temp;
}

void inputDetails(struct record *book)
{
    book[0].title=getname("enter name of book: ");
    book[0].author=getname("enter author of book: ");
    book[0].publisher=getname("enter publisher of book: ");
    printf("enter book id: ");
    scanf("%d",&book[0].id);
}

void display(struct record *book)
{
    printf("book title is %s\n book author is %s\nbook publisher is %s\n book id is %d\n\n",
    book[0].title,book[0].author,book[0].publisher,book[0].id);
}


int main()
{
    struct record *book;
    book=(struct record *)calloc(1,sizeof(struct record));
    inputDetails(book);
    display(book);


}
