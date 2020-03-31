#include<iostream>
using namespace std;
int fibo(int n)
{
    if(n==0 || n==1)
    return n;
    else
    {
        return (fibo(n-1)+fibo(n-2));
    }
    
}
int main()
{
    int n,i=0;
    cin >> n;
    for(int j=0;j<n;j++)
    {
        cout << fibo(i)<<",";
        i++;
    }
        cout<<endl;
}