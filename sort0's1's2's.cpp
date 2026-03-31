// Sort of an array 0's, 1's and 2's
// Dutch National Flag Algorithm -- Three pointer approach 
#include<iostream>
#include<algorithm>
using namespace std;
void sort012(int arr[], int n)
{
	
	int low =0;
	int mid =0;
	int high =n-1;
	while(mid<=high)
	{
		if(arr[mid] == 0)
		{
		swap(arr[low] , arr[mid]);
		low++;
		mid++;
		}
	else
	{
		if(arr[mid] ==1)
		{
			mid++;
		}
		else
		{
			if(arr[mid] == 2)
			{
				swap(arr[mid] , arr[high]);
				high--;
			}
		}
	}
}
}
int main()
{
cout<<"Enter the number of elements "<<endl;
int n;
cin>>n;
int arr[n];
cout<<"Enter the array containing 0's , 1's , 2's"<<endl;
for(int i=0;i<n;i++)
{
	cin>>arr[i];
}
sort012(arr, n);
cout<<"Sorted array  :"<<endl;
for(int i=0;i<n;i++)
{
	cout<<arr[i] <<" ";
}
}

