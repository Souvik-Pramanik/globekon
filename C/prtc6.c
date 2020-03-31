#include<stdio.h>
int binary_search(int[],int,int,int,int);
int main()
{
    int i;
    int search; 
    int n;
    int middle;
    int first; 
    int last;  
    int array[100];
    
    printf("ENTER THE SIZE OF THE ELEMENT");
    scanf("%d",&n);
    printf("ENTER %d NUMBER OF ELEMENTS INTO THE LIST",n); 
    for (i=0;i<n;i++)
    {
        scanf("%d",&array[i]);
    }
    printf("ENTER DATA TO BE SEARCHED");
    scanf("%d",&search);
    binary_search(array, 0, n-1, search,n);  
}
int binary_search(int array[], int first, int last, int search,int n)
{   int middle;
    first=0;
    last=n-1;
    middle=(first+last)/2;
   if (search<array[middle])
    {
        binary_search(array, first, middle-1, search,n);
    }
        else if (array[middle]==search)
        
            {
                printf("THE SEARCHED ELEMENT %d IS FOUND IN LOCATION %d",search,middle+1); 
                return middle;
            } 
        
        else if (search>array[middle])
        {
            binary_search(array, middle+1, last, search,n);
        }   
        
        
        
        
    
        else if (first>last)
        {
             printf("The element isn't found\nPlease re-make the list!");
             return 0;
        }
    
}
