#include<stdio.h>
#include<stdlib.h>
struct linkedlist
{
	int data;
	struct linkedlist *link;
};
struct linkedlist *head *p;
void creatnode()
{
	p=(struct linkedlist*)malloc(sizeof(struct linkedlist))
}
int delfrmbeg()
{
	if(head=='\0')
		return;
	else
		p=head;
		head=p->link;
		p='\0';
}
int delfrmend()
{
	if(head=='\0')
		return;
	else
	{
		
	}
}
int main()
{
	int ch;
	head='\0';
	while(1)
	{
		printf("1. Delete from begining\n 2. Delete from end\n 3. Delete after a node\n 4. Delete before a node\n 5. Display\n 6. Exit\n");
		scanf("%d",&ch);
		switch(ch)
		{
			case 1:delfrmbeg();
				break;
			case 2:delfrmend();
				break;
			case 3:delaftr();
				break;
			case 4:delbfr()
				break;
			case 5:display();
				break;
			case 6:exit(0);
		}
	}
}
