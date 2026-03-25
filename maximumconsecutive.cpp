//Maximum consecutive one's
#include<iostream>
using namespace std;
int Maxconsec(int arr[] , int n)
{
	int count = 1;
	int max =1;
	for(int i=1 ; i<n;i++)
	{
		if(arr[i] == arr[i-1])
		{
			count++;
		}
		else
		{
			count =1;
		}
		if(count > max)
		{
			max = count;
		}
	
}
return max;
}
int main()
{
	int n;
	cout<<"Enter the length of the array"<<endl;
	cin>>n;
	int arr[n];
	cout<<"Enter the elements of the array"<<endl;

	for(int i=0;i<n;i++)
	{
		cin>>arr[i];
	}
	int maxc = Maxconsec(arr, n);
cout<<"Maximum Consecutive elements are " <<maxc;	
	
}
