#include<stdio.h>
#include<stdlib.h>
#define MAX 10
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
	if(s.front==-1 && s.rear==-1)
	{
		printf("\nUnderflow");
	}
	else if(s.front==MAX-1 && s.rear==MAX-1)
	{
		printf("\nUnderflow");
	}
	else
	{
		item=s.data[s.front];
		printf("Deleted element is : %d",item);
		s.front=s.front+1;
	}
}
void enqueue()
{
	int n;
	if(s.rear==MAX-1)
	{
		printf("Overflow Condition");
	}
	//else if(s.front=s.rear+1)
	//{
	// 	
	//}
	else if(s.rear==-1 && s.front==-1)
	{
		s.front=0;
		s.rear=0;
		printf("\nEnter an element :");
		scanf("%d",&n);
		s.data[s.rear]=n;
	}
	else
	{
		s.rear=s.rear+1;
		printf("\nEnter an element :");
		scanf("%d",&n);
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


