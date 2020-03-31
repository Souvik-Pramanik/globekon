#include<stdio.h>
#include<stdlib.h>
struct lnklst
{
	int data;
	struct lnklst *link;
};
struct lnklst *s,*p;
void crt_node()
{
	p=(struct lnklst*)malloc(sizeof(struct lnklst));
}
int ins_at_beg()
int n;
{
printf("\nEnter an Element :\n");
scanf("%d",&n);
crt_node();
p->data=n;
p->link=s;
s=p;
}
void ins_at_end()
{
int n;
struct lnklst *q;
printf("\nEnter an Element:\n");
scanf("%d",&n);
crt_node();
p->data=n;
if(s=='\0')
{
	p->link=s;
	s=p;
}
else
{
	q=s;

	while(q->link!='\0');
	{
		q=q->link;
	}
	p->link='\0';
	q->link=p;
}
void ins_bfr_nd()
{
	int e,n;
	struct lnklst *q,*r;
	if(s='\0')
	{
		printf("\nThats not possible\n");
		return;
	}
	printf("\nEnter element :\n");
	scanf("%d",&n);
	q=s;
	r='\0';
	while(q!='\0' && q->data!=e)
	{
		r=q;
		q=q->link;
	}
	if(q=='\0')
	{
		printf("\nElement not found");
		return;
	}
	printf("\nEnter new Element");
	scanf("%d",&n);
	crt_node();
	p->data=n;
	if(q==s)
	{
		p->link=s;
		s=p;
	}
	else
	{
			p->link=r->link;
			r->link=p;
	}
}
void ins_aftr_nd()
{  
    int e,n;
    struct linkedlist * q;
    if(s=='\0')
    {
        printf("\nInvalid Operation...");
        return;
    }   
    printf("\nEnter Search element: ");
    scanf("%d",&e);
    q=s;
    while(q!='\0' && q->data!=e)
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
        crt_node();
        p->data=n;
        p->link=q->link;
        q->link=p;
    }
}
int main()
{
	int nm;
	while(1)	
	{
		printf("1. Insert at begining\n2. Insert at end\n3. Inser before a node\n4. Insert after a node\n5. Delete from begining\n 6. Delete from end\n 7. Delete after a node\n 8. Delete before a node\n9. Display\n10. Exit");
		scanf("%d",&nm);
		switch(nm)
		{
			case 1: ins_at_beg();
				break;
			case 2: ins_at_end();
				break;
			case 3: ins_bfr_nd();
				break;
			case 4: ins_aftr_nd();
				break;
			case 5: display();
				break;
			case 6: exit(0);
				break;
		}
	}
}
