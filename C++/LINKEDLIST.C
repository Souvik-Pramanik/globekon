#include<stdio.h>
#include<stdlib.h>
struct linkedlist
{
    int data;
    struct linkedlist * link;  
};

struct linkedlist * head,*p;

void createnode()
{
    p=(struct linkedlist*)malloc(sizeof(struct linkedlist));
}
void insertatbegin()
{
    int n;
    printf("\nEnter a data: ");
    scanf("%d",&n);
    createnode();
    p->data=n;
    p->link=head;
    head=p;
}
void insertatend()
{
    int n;
    struct linkedlist * q;
    printf("\nEnter a data: ");
    scanf("%d",&n);
    createnode();
    p->data=n;
    if(head=='\0')
    {
         p->link=head;
         head=p;
         
    }
    else
    {
        q=head;
        while(q->link!='\0')
        {
            q=q->link;
        }
        p->link='\0';
        q->link=p;
    }
}
void insertafter()
{  
    int gn,n;
    struct linkedlist * q;
    if(head=='\0')
    {
        printf("\nInvalid Operation...");
        return;
    }   
    printf("\nEnter Search element: ");
    scanf("%d",&gn);
    q=head;
    while(q!='\0' && q->data!=gn)
    {
        q=q->link;
    }
    if(q=='\0')
    {
        printf("\nSearch element not found...");
        return;
    }
    else
    {
        printf("\nEnter a data: ");
        scanf("%d",&n);
        createnode();
        p->data=n;
        p->link=q->link;
        q->link=p;
    }
}
void insertbefore()
{
    int gn,n;
    struct linkedlist * q,*s;
    if(head=='\0')
    {
        printf("\nInvalid Operation...");
        return;
    }   
    printf("\nEnter Search element: ");
    scanf("%d",&gn);
    q=head;
    s='\0';
    while(q!='\0' && q->data!=gn)
    {
        s=q;
        q=q->link;
    }
    if(q=='\0')
    {
        printf("\nSearch element not found...");
        return;
    }
    printf("\nEnter a data: ");
    scanf("%d",&n);
    createnode();
    p->data=n;
    if(q==head)
    {
        p->link=head;
        head=p;
    }
    else
    {
        p->link=s->link;
        s->link=p;
    }
}

void display()
{
    struct linkedlist * q;
    q=head;
    printf("\n");
    while(q!='\0')
    {
        printf("%d ",q->data);
        q=q->link;
    }
}

int main()
{
    int ch;
    head='\0';
    while(1)
    {
        printf("\n1. Insert at Begin");
        printf("\n2. Insert at End");
        printf("\n3. Insert at after a node");
        printf("\n4. Insert at before a node");
        printf("\n5. Display");
        printf("\n0. Exit ");
        scanf("%d",&ch);
        switch(ch)
        {
            case 1:insertatbegin();
                   break;
            case 2:insertatend();
                   break;
            case 3:insertafter();
                   break;
            case 4:insertbefore();
                   break;
            case 5:display();
                   break;
            case 0:exit(0); 
        }
    }
}
