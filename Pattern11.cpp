#include<iostream>
using namespace std;

void pattern11(int n)
{
	int start;
	for(int i=1; i<=n;i++)
	{
		if(i % 2==0)
		{
			start = 0;
		}
		else
		{
			start = 1;
		}
		for(int j=1 ; j<=i;j++)
		{
			
			cout<<start;
			cout<<" ";
			start = 1 -start;
			
			
		}
		cout<<endl;
	}
}
int main()
{
	
	
	
	int n;
	cout<<"Enter the number"<<endl;
	cin>>n;
	
	pattern11(n);
}
