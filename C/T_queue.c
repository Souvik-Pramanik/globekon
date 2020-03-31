#include<stdio.h>
#include<stdlib.h>
#define MAX 3
struct queue
{
	int data[MAX];
	int front;
	int rear;
};
struct queue T;
void enqueue()
{
	int item,n;
	if(T.rear==MAX-1)
	{
		printf("Overflow Condition");
	}
	else if(T.rear==-1 && T.front==-1)
	{
		T.front=0;
		T.rear=0;
		printf("\nEnter an element :");
		scanf("%d",&n);
		T.data[T.rear]=n;
	}
	else
	{
		T.rear=T.rear+1;
		printf("\nEnter an element :");
		scanf("%d",&n);
		T.data[T.rear]=n;
	}
}
void dequeue()
{
	if(T.front==-1 && T.rear==-1)
	{
		printf("\nUnderflow");
	}
	else
	{
		printf("Deleted element is : %d",T.data[T.front]);
		T.front=T.front+1;
	}
}
void display()
{
int c;
	if(T.rear==-1 && T.front==-1)
	{
		printf("\nQueue is empty !");
	}
	else
	{
		printf("\nStatus of queue : ");
		for(c=T.front;c<=T.rear;c++)
		{
			printf("%d;",T.data[c]);
		}
	}
}	
int main()
{
int c;
T.front=-1;
T.rear=-1;
	while(1)
	{
		printf("\n 1. Enqueue\n 2. Dequeue\n 3. Display\n 4.Exit\n");
		scanf("%d",&c);
		switch(c)
		{
			case 1:enqueue();
				break; 
			case 2:dequeue();
				break;
			case 3:display();
				break;
			case 4:exit(0);
				break;
		}
	}
}
