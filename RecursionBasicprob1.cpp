#include<iostream>
using namespace std;

void name(int i,int n)
{
	
	if(i>n)
	{
		return;
	}
	else
	{
		
		
		cout<<"Parmeet "<<endl;
		name(i+1,n);
	}
	
	
}
int main()
{
	int n; 
	int i ;

	cout<<"Enter the Value"<<endl;
	cin>>n;
	
	
	name(1,n);
}
