// Recursion Basic Problem 5 ---- Reverse the array
#include<iostream>
using namespace std;
void reverse(int n, int i, int arr[])
{
      if(i>=n/2)
	  {
	  	return ;
		  }	
		  else
		  {
		  int temp = arr[i];
		  arr[i] = arr[n-i-1];
		  arr[n-i-1] = temp;
		  	reverse(n,i+1,arr);
		  }
}
int main()
{
	int n;
	cout<<"Enter the length of array"<<endl;
	cin>>n;
	
	int arr[n];
	for(int i=0;i<n;i++)
	{
		cin>>arr[i];
	}
	reverse(n, 0 , arr );
	
	for(int i=0;i<n;i++)
	{
		cout<<arr[i];
	}
}
