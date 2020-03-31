#include<stdio.h>
int main()
{
	int n,p[50],m[50][50],i,j,k,l,q=0;
	printf("Enter the value of numbers of matrix's:");
	scanf("%d",&n);
	printf("\nEnter the value of Parenthisis Matrix:");
	for(i=0;i<=n;i++)
	{
		printf("\nEnter the value of p[%d]:",i);
		scanf("%d",&p[i]);
	}
	for(i=1;i<=n;i++)
	{
		m[i][i]=0;
		//m[j][j]=0;
	}
	for(l=2;l<=n;l++)
	{
		for(i=1;i<=n-l+1;i++)
		{
			j=i+l-1;
			m[i][j]=9999;
			for(k=i;k<=j-1;k++)
			{
				q=m[i][k]+m[k+1][j]+(p[i-1]*p[k]*p[j]);
				if(q<m[i][j])
				{
					m[i][j]=q;
					//m[j][i]=0;
				}
			}
		printf("OPtimal Scaler Value=m[%d][%d]:%d\n",i,j,m[i][j]);
	}
	}
	printf("\n");
	for(i=1;i<=n;i++)
	{
		for(j=1;j<=n;j++)
		{
			printf("%d\t",m[i][j]);
		}
		printf("\n");
	}
	printf("Optimal Scaler Value= %d\n",m[1][n]);
}
