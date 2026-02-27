//Recursion Problem -2
#include<iostream>
using namespace std;
void number(int i, int n)
{
	if(i>n)
	{
		return;
	}
	else
	{
		cout<<i<<endl;
		
		number(i+1,n);
	}
}
int main()
{
	
	int n; 
	int i;
	cout<<"Enter the number "<<endl;
	cin>>n;
	
	number(1,n);
}
