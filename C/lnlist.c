#include<stdio.h>
#include<stdlib.h>
struct node
{
	int data;
	struct node *next;
};
struct node *start=NULL;
void ins_at_beg()
int 
int main()
{
	int ip,data;
	while(1)
	{
		printf("1. Insert at begining\n2. Inser at end\n3. Delete from begining\n4. Delete from end\n5. Display\n6. Exit");
		scanf("%d",&data);
		switch(ip)
		{
			case 1:ins_at_beg()
				break;
			case 2:ins_at_end()
				break;
			case 3:del_frm_beg()
				break;
			case 4:del_frm_end()
				break;
			case 5:display()
				break;
			case 6:exit(0)
				break;
		}
	}
}
