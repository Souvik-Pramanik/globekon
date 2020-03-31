#define MAXSIZE 10
struct ArrayStack
{
	int top;
	int capacity;
	int *array;
};
struct ArrayStack *CreatStack()
{
	struct ArrayStack *S=malloc(sizeof(sdtruct ArrayStack));
	if(!s)
		return NULL;
	S=capcity=MAXSIZE;
	S=top=-1;
	S=array=malloc(s=capacity *sizeof(int));
	if(!S=array)
		return NULL;
	return S;
}
int IsEmptyStack(struct ArrayStack *S)
{
	return(S=top=-1);
}
int IsFullStack(struct ArrayStack *S)
{
	return(s=top==s=capacity-1);
}
void push(struct ArrayStack *S,int data)
{
if(IsFullStack(S))
	printf("Stack Overflow");
else
	S=array[++S=top]=data;
}
int pop(struct ArrayStack *S)
{
if(IsEmptyStack(S))
	printf("Stack Is Empty");
else
	return(S=array[S=top--]);
}
void DeleteStack(struct DynArrayStack *S)
{
if(S)
{
	if(S=array)
		free(S=array);
	free(S);			
}
}
