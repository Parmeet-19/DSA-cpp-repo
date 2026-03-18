// array is sorted or not 
#include<iostream>
#include<vector>
using namespace std; 
int Issorted(vector<int>&arr, int n)
{
	for(int i = 1;i<n;i++)
	{
		if(arr[i] < arr[i-1])
		{
		   return -1;	
		}

	}
return 0;
	
}
int main()
{
	int n;
	cout<<"Enter the number of elements in array"<<endl;
	cin>>n;
	
	vector<int>arr(n);
	cout<<"Enter the elements in an array"<<endl;
	for(int i=0;i<n;i++)
	{
		cin>>arr[i];
	}
	
int result = Issorted(arr, n);
if(result == 0)
{
	cout<<"Array is sorted "<<endl;
}
else
{
	cout<<"Array is not sorted"<<endl;
}
}
