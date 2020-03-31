#include<stdio.h>
#include<stdlib.h>
struct stack
{
	int data[5];
	int top;
};
struct stack s;
void push()
{
	int a;
	if(s.top==4)
	{
		printf("\nStack is  fully overflow\n");
	}
	else 
	{
		printf("\nEnter an element to enter :\n");
		scanf("%d",&a);
		s.top++;
		s.data[s.top]=a;
	}
}
void pop()
{
	if(s.top==-1)
	{
		printf("\nStack is fully empty !!!\n");
	}
	else
	{
		printf("\nDeleted element is : %d\n",s.data[s.top]);
		s.top=s.top-1;
	}
}
void display()
{
	int b;
	if(s.top==-1)
	printf("\nStack Is Empty....\n");
	else
	{
		printf("\nStatus of the stack :\n");
		for(b=s.top;b>=0;b--)
		{
			printf("\n%d\n",s.data[b]);
		}
	}
}
int main()
{
	s.top=-1;
	int p;
	while(1)
	{
		printf("\nENTER YOUR CHOISE \n");
		printf("\n1.PUSH\n2.POP\n3.DISPLAY\n4.EXIT\n");
		scanf("%d",&p);
		switch(p)
		{
			case 1:push();
				break;
			case 2:pop();
				break;
			case 3:display();
				break;
			case 4:exit(0);
		}
	} 
}
