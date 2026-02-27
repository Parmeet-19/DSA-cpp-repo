// Hashing -- Number Hashing 
#include<iostream>
using namespace std;
int main()
{
	
	int n;
	cout<<"Enter the number " <<endl;
	cin>>n;
	int arr[n];
	cout<<"Enter the array" <<endl;
	for(int i=0;i<n;i++)
	{
		cin>>arr[i];
		
	}
	
	int hash[n]= {0};
	
	for(int i=0;i<n;i++)
	{
		hash[arr[i]] +=1;  // Pre-computation 
	}
	
	int q; // Enter the query 
	cout<<"Enter the total numbers to be found"<<endl;
	cin>>q;
	
	while(q--)
	{
		int number;
		cout<<"Enter the numbers "<<endl;
		cin>> number;  // numbers to be find 
	cout<<hash[number]<<endl;	
	}
	
}
