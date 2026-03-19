//Rotate the array by one place 
#include<iostream>
#include<vector>
using namespace std;
int rotate(vector<int>&arr, int n)
{
	int temp = arr[0];
	for(int i=1;i<n;i++)
	{
		arr[i-1] = arr[i];
	}
	arr[n-1] = temp;
}

int main()
{
	cout<<"Enter the number of elements in an array"<<endl;
	int n;
	cin>>n;
	vector<int>arr(n);
	cout<<"Enter the elements in an array"<<endl;
	for(int i= 0; i<n;i++)
	{
		
		cin>>arr[i];
	}
	
	rotate(arr, n);
	cout<<"Rotated array is " <<endl;
		for(int i= 0; i<n;i++)
	{
		
		cout<<arr[i]<<" ";
	}
}
