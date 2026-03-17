// Binary Search 
#include<iostream>
using namespace std;
int index;
int binarysearch(int arr[], int n, int key)
{
	int start =0;
	int end = n-1;
	int mid = start + (end - start )/2;
	while(start<=end)
		{
			
			
			
			if(key == arr[mid])
			{
				return mid;
			}
			if(key> arr[mid])
			{
				start = mid+1;
			} else
		
			{
				end = mid-1;
			}
			return index =mid;
	}
	return index = -1;
}
int main()
{
	cout<<"Enter the number of elements "<<endl;
	int n;
	cin>>n;
	int arr[n];
	cout<<"Enter the sorted array Elements"<<endl;
	for(int i=0; i<n ; i++)
	{
		cin>>arr[i];
	}
	int key;
	cout<<"Enter the elemets to find"<<endl;
	cin>>key;
	
	binarysearch(arr, n, key);

if(index == -1)
{
	cout<<"Element not found !" <<endl;
}
	else{
	
	cout<<"Element found is at index " <<index;
}
	
	
	
	
	
	
}
