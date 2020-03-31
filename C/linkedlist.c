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
void delfrmbeg()
{
	if(head=='\0')
		return;
	else
		p=head;
		head=p->link;
		p='\0';
}
void delfrmend()
{
	struct linkedlist* p=head,*ptr='\0';
	p=head;
	if(p->link='\0')
	head='\0';
	else
	{
		while(p->link='\0')
		{
			q=p;
			p=p->link;
		}
		q='\0';
	}
	
}
void delaftr()
{
	struct linkedlist * q=head,*qq='\0',*p='\0';
	int selement;
	printf("\nEnter Search Elemnt\n");
	scanf("%d",&selement);
	if(head=='\0');
		return;
	else
		q=head;
		while(q!='0' && q->data!=selement)
		{
			q=p->link;
		}
		if(q=='\0' && q->link=='\0')
		return;
		else
		{
			p->link=qq->link;
			qq->link=p;
		}
		p='\0';
}
void delbfr()
{
	struct linkedlist * q=head,*qq='\0',*p='\0';
	int selement;
	printf("\nEnter Search Elemnt\n");
	scanf("%d",&selement);
	if(head=='\0');
		return;
	else
		q=head;
		while(q!='0' && q->data!=selement)
		{
			q
		}
		p='\0';
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
        printf("1. Insert at begining\n2. Insert at end\n3. Inser before a node\n4. Insert after a node\n5. Delete from begining\n 6. Delete from end\n 7. Delete after a node\n 8. Delete before a node\n9. Display\n10. Exit");
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
            case 5:delfrmbeg();
				break;
			case 6:delfrmend();
				break;
			case 7:delaftr();
				break;
			case 8:delbfr()
				break;
            case 9:display();
                   break;
            case 10:exit(0); 
        }
    }
}
