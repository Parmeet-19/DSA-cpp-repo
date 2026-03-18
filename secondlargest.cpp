//Second largest element 
#include<iostream>
#include<vector>
using namespace std;
int secondlargest(vector<int>&arr, int n)
{
	int element = arr[0];
	int largestelement = 0;
	int secondlargest = -1;   // only if array contains non negative elements           
	for(int i =1;i<n;i++)
	{
		if(arr[i] > element)
		{
			element = arr[i];
		}
	}
	if(element > largestelement )
	{
		largestelement = element;
	}
	for(int i=0 ; i<n;i++)
	{
		if(arr[i] > secondlargest  && arr[i] != largestelement)
		{
			secondlargest = arr[i];
		}
	}
	cout<<"Secondlargest element of the array is " <<secondlargest;
	
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
	
	secondlargest(arr, n);
}
