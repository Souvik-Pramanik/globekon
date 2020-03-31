#include<stdio.h>
#include<stdlib.h>
#define MAX 5
struct queue
{
	int data[MAX];
	int front;
	int rear;
	int count;
};
struct queue s;
void enqueue()
{
	int n;
	if(s.count==MAX)
	{
		printf("\nQueue is full !!!\n");
	}
	else if(s.front==-1 && s.rear==-1 /*|| s.rear==(s.rear+1)%MAX*/)
	{
		s.front=0;
		s.rear=0;
		printf("\nEnter an element :");
		scanf("%d",&n);
		s.data[s.rear]=n;
		s.count=s.count+1;
	}
	else
	{
		//printf("\nNothing to do !!! :( \n");
		s.rear=(s.rear+1)%MAX;
		printf("\nEnter an element :");
		scanf("%d",&n);
		s.data[s.rear]=n;
		s.count=s.count+1;
	}
}
void dequeue()
{
	if(s.count==0)
	{
		printf("\nQueue is empty !!!\n");
	}
	else
	{
		printf("%d is deleted",s.data[s.front]);
		s.front=(s.front+1)%MAX;
		s.count=s.count-1;
	}
}
void display()
{
	int c;
	if(s.count==0)
	{
		printf("\nQueue is emty!");
	}
	else if(s.rear>=s.front)
	{
		printf("\nStatus of queue : \n");
		for(c=s.front;c=s.rear+1;c++)
		{
			printf("%d;",s.data[c]);
		}
	}
	else
	{	printf("\nStatus of queue : ");
		for(c=s.front;c<MAX;c++)
		{
			printf("%d;",s.data[c]);
		}
		for(c=0;c=s.rear;c++)
		{
			printf("%d;",s.data[c]);
		}
	}

}
int main()
{
int c;
s.front=0;
s.rear=-1;
s.count=0;
	while(1)
	{
		printf("\n 1. Enqueue\n 2. Dequeue\n 3.Display \n 4.Exit\n");
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
