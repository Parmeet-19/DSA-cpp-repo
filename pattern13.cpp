#include<iostream>
using namespace std;

void pattern13(int n)
{ int  num=1;
	for(int i=1;i<=n;i++)
	{
		for(int j=1;j<=i;j++)
		{
			cout<<num;
			cout<<" ";
			num++;
		}
		cout<<endl;
	}
}
int main()
{
	
	
	
	int n;
	cout<<"Enter the number"<<endl;
	cin>>n;
	
	pattern13(n);
}
