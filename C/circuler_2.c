#include<stdio.h>
#include<stdlib.h>
#define MAX 5
struct queue
{
	int data[MAX];
	int front;
	int rear;
};
struct queue s;
void dequeue()
{
	int item;
	if((s.front==-1 && s.rear==-1) || ((s.rear+1)%MAX)==((s.front)%MAX))
	{
		printf("\nUnderflow");
	}
	//else if(s.front==s.rear)
	//{
	//	s.front=-1;
	//	s.rear=-1;	
	//}
	else if(s.rear==MAX-5l && s.front==MAX-1)
		{
			s.front=1;
			printf("\n%d is deleted",s.data[s.front]);
		}
	else
	{
		//item=s.data[s.front];
		//s.front=(s.front+1)%MAX;
		printf("%d is deleted",s.data[s.front]);
		s.front=(s.front+1)%MAX;
	}	
}
void enqueue()
{
	int n;
	if(s.front==(s.rear+1)%MAX)
	{
		printf("Overflow Condition");
	}
	else if(s.front==-1 && s.rear==-1)
	{
		s.front=0;
		s.rear=0;
		printf("\nEnter an element :");
		scanf("%d",&n);
		s.data[s.rear]=n;
	}
	else
	{
		printf("\nEnter an element :");
		scanf("%d",&n);
		s.rear=(s.rear+1)%MAX;
		s.data[s.rear]=n;
	}
}
void display()
{
int c;
	if(s.rear==-1 && s.front==-1)
	{
		printf("\nQueue is emty!");
	}
	else if(s.front==s.rear+1)
	{
		printf("\nStatus of queue : ");
		for(c=s.rear;c<=s.front+3;c++)
		{
			printf("%d;",s.data[c]);
		}
	}
		else
	{
		printf("\nStatus of queue : ");
		for(c=s.front;c<=s.rear;c++)
		{
			printf("%d;",s.data[c]);
		}
	}
}	
int main()
{
int c;
s.front=-1;
s.rear=-1;
	while(1)
	{
		printf("\n 1. Enqueue\n 2. Dequeue\n 3. Exit\n 4.Display\n");
		scanf("%d",&c);
		switch(c)
		{
			case 1:enqueue();
				break; 
			case 2:dequeue();
				break;
			case 3:exit(0);
				break;
			case 4:display();
				break;
		}
	}
}


