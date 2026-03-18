//Largest element in the array 
#include<iostream>
#include<vector>
using namespace std;
int largestelement(vector<int>&arr, int n)
{
	int element  = arr[0];
	int largest = 0;

	for(int i =1; i<n;i++)
	{
		if(arr[i]>element)
		{
			element = arr[i];
		}
	}
	if(element > largest)
	{
		largest = element ;
	}
	
	
	cout<<"Largest element of the array is "<<largest;
	
}
int main()
{
	int n ; 
	cout<<"Enter the number of elements in an array"<<endl;
	cin>>n;
	vector<int>arr(n);
	
	
	cout<<"Enter the elements of an array"<<endl;
	for(int i=0;i<n;i++)
	{
		cin>>arr[i];
	}
		
	largestelement(arr, n);
	
	
}
