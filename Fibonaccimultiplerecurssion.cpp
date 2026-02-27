//Multiple Recursion -- Fibonacci 
#include<iostream>
using namespace std;
int mr(int n)   // Function for multiple recurssion 
{
	
	
	if(n<=1)
	{
		return n;
	}
	else
	{
		int last = mr(n-1);    // Last number before n
		int slast = mr(n-2); // Second last number before n
		
		return last + slast;    // Sum of two last number --- Fibonacci number 
		
		
	}
}
int main()
{
	
	int n;
	cout<<"Enter the value"<<endl;
	cin>>n;
	
	
	cout<<mr(n);
	
	
}
