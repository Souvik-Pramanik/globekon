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
void enqueue()
{
	int n;
	if(s.rear==MAX-1)
	{
		printf("Queue Overflow\n");
	}
	else if(s.front==-1 && s.rear==-1)
	{
		s.rear=0;
		s.front=0;
		printf("Enter an elment to insert in the queue :\n");
		scanf("%d",&n);
		s.data[s.rear]=n;
	}
	else
	{
		s.rear=s.rear+1;
		printf("Enter an elment :\n");
		scanf("%d",&n);
		s.data[s.rear]=n;
	}
}
void dequeue()
{
	if(s.rear==-1 && s.front==-1)
	{
		printf("Queueu Is Empty\n");
	}
	else
	{
		printf("Deleted elemnt is:%d\n",s.data[s.front]);
		s.front = s.front+1;
	}
}
void display()
{
	int c;
	if(s.front==-1 && s.rear==-1)
	{
		printf("Queue is empty\n");
	}
	else
	{	printf("Status of queue: \n");
		for(c=s.front;c<=s.rear;c++)
		{
			printf("%d\n",s.data[c]);
		}
	}
}
int main()
{
	int ch;
	s.front=-1;
	s.rear=-1;
	while(5)
	{
		printf("======> Enter your Choise <======\n");
		printf(" 1. Enqueue\n 2. Dequeue\n 3. Display\n 4. Exit\n");
		scanf("%d",&ch);
		switch(ch)
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
