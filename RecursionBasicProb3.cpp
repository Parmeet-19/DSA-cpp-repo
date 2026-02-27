#include<iostream>
using namespace std;
void Number(int i, int n)
{
	if(i>=1)
	{
		cout<<i<<endl;
		Number(i-1,n);
		
	
	}
	else
	{
		
		
		return ;
	}
}
 int main()
 {
 	
 	int n;
 	int i;
 	cout<<"Enter the value"<<endl;
 	cin>>n;
 	
 	Number(n,n);
 }
