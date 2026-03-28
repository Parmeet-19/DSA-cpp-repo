//2 sum problem
#include<iostream>  
#include<algorithm>
#include<vector>
using namespace std;
int twosum(vector<int>& arr , int n, int target)
{
	int first = 0;
	int last = n-1; // Two pointer 
	sort(arr.begin() , arr.end());
	
	while(first < last)
	{
		int sum = arr[first] + arr[last];
		if(sum == target )
		{
			return 0;
		}
		else
		{
			if(sum > target )
			{
				last--;
			}
			else
			{
				first++;
			}
		}
		
	}
	return -1;
	}
int main()
{
	cout<<"Enter the number of elements in an array "<<endl;
	int n;
	cin>>n;
	cout<<"Enter the array "<<endl;
	vector<int>arr(n);
	
	
	for(int i=0;i<n;i++)
	{
		cin>>arr[i];
	}
	
	cout<<"Enter the target " <<endl;
	int target;
	cin>>target;
	
	
int index = twosum(arr,n, target);

if(index ==0)
{
	cout<<"Target is present";
}
else
{
	cout<<"Target is not present ";
}
}
