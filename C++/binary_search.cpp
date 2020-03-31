#include<iostream>
int binary_search(int[],int,int,int);
int main()
{
	int a[100],n,i,x,pos;
	std::cout << "Enter the size of the array: ";
	std::cin >> n;
	std::cout << "\nEnter "<<n<<" numbers of elements: \n";
	for(i=0;i<n;i++)
	{
		std::cin >> a[i];
	}
	std::cout << "Enter a element to search: ";
	std::cin >> x;
	pos=binary_search(a,0,n-1,x);
	if(pos==-1)
	{
		std::cout << "Couldn't Find Your Item !!!\n";
	}
	else
	{
		std::cout << "Successfully fond in "<<pos+1<<" position.\n";
	}
}
int binary_search(int a[50],int l,int u,int x)
{
	int mid;
	while(l<=u)
	{
		mid=(l+u)/2;
		if(a[mid]==x)
		{
			return mid;
		}
		else if(a[mid]>x)
		{
			u=mid-1;
		}
		else
		{
			l=mid+1;
		}
		
	}
	return -1;
}
