#include<iostream>
using namespace std;

void pattern12(int n)
{
	int space =2*n-2;
	
	for(int i=1;i<=n;i++)
	{
		
		for(int j=1;j<=i;j++)
		{
			cout<<j;
			cout<<" ";
		}
		for(int j=1;j<=space;j++)
		{
			cout<<" ";
		}
		for(int j=i;j>=1;j--)
		{
			cout<<j;
			cout<<" ";
		}
		cout<<endl;
		space = space -2;
	}
	
}
int main()
{
	
	
	
	int n;
	cout<<"Enter the number"<<endl;
	cin>>n;
	
	pattern12(n);
}
