#include<stdio.h>
int main()
{
	int n,i,j,k,a[50][50],b[50][50];
	printf("Enter the value of numbers of matrix's:");
	scanf("%d",&n);
	for(i=1;i<=n;i++)
	{
		for(j=1;j<=n;j++)
		{
			if(i!=j)
			{
				printf("Enter values of the matrix[%d][%d]:",i,j);
				scanf("%d",&a[i][j]);
				b[i][j]=j;
			}
			else
			{
				a[i][j]=0;
				b[i][j]=0;
			}
		}
	}
	

	for(k=i;k<=n;k++)
	{
		for(i=1;i<=n;i++)
		{
			for(j=1;j<=n;j++)
			{
				if(i!=j && i!=j && j!=k && a[j][k]!=999 && a[k][j]!=999)
				{
					if(a[j][j]==999 || a[i][j]>a[i][k]+a[k][j])
					{
						a[i][j]=a[i][k]+a[k][j];
					}
				}
			}
		}
	}

	printf("===> Weight Matrix <===\n");
	for(i=1;i<=n;i++)
	{
		printf("|");
		for(j=1;j<=n;j++)
 		{
			printf(" %d\t",a[i][j]);
		}
		printf("|\n");
	}
	printf("===> Path Matrix <===\n");
	
	for(i=1;i<=n;i++)
	{
		printf("|");
		for(j=1;j<=n;j++)
		{
			printf(" %d\t",b[i][j]);
		}
		printf("|\n");
	}
}
