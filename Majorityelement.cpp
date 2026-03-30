// Majority element   -- element which appears more than n/2 time ## n is size of array 
//Moose's Voting algorithm 
// Sort of an array 0's, 1's and 2's
// Dutch National Flag Algorithm -- Three pointer approach 
#include<iostream>
#include<algorithm>
using namespace std;
int  majority(int arr[], int n)
{
int count =0;
int element;
for(int i=0;i<n;i++)
{
	if(count ==0)
	{
		count = 1;
		element =arr[i];
	}
	else
	{
		if(arr[i] == element)
		{
			count++;
		}
		else
		{
			count--;
		}
	}
}
int count1 =0;
for(int i=0;i<n;i++)
{
	if(arr[i] == element)
	{
		count1++;
	}
}
if(count1 > n/2)
{
	return element;
}
else
{
	return -1;
}
	






}
int main()
{
cout<<"Enter the number of elements "<<endl;
int n;
cin>>n;
int arr[n];
cout<<"Enter the array"<<endl;
for(int i=0;i<n;i++)
{
	cin>>arr[i];
}
int ans = majority (arr, n);
if(ans ==-1)
{
	cout<<"No major element"<<endl;
}
else
{
	cout<<"Majority element is "<<ans;
}
}

