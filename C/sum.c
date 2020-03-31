#include<stdio.h>
int main()
{
int arr[100],n,v,sum=0,choise;
printf("\nGudmarani array er size bol !!!");
scanf("%d",&n);
printf("\nBal %d ta number lekh re bara",n);
for(v=0;v<=n-1;v++)
scanf("%d",&arr[v]);
for(v=0;v<=n-1;v++)
sum=sum+arr[v];
for(v=0;v<=n-1;v++)
printf("\nFuck U[%d]=%d",v,arr[v]);
printf("\nYour fucking result is:%d\n",sum);
printf("\nfor FUN press 1, for MORE FUN press 2\n");
scanf("%d",&choise);
if(choise==1)
{
printf("\nTUI HANDLE MAR\n");
}
else if(choise==2)
{
printf("\nTUI PAKKA KHANKI\n");
}
else
printf("\nLAURA TUI HANDLE MAR SALA\n");
}
