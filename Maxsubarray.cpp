// Max Subarray sum
// Kadane's Algorithm --   If sum is less than 0 , then keep the value of sum =0; 
#include<iostream>
#include<climits>
using namespace std;

int maxi(int arr[], int n)
{
    int maxe = INT_MIN;
    int sum = 0;

    int start = 0;
    int ansstart = -1;
    int ansend = -1;

    for(int i = 0; i < n; i++)
    {
        if(sum == 0)
        {
            start = i;
        }

        sum += arr[i];   

        if(sum > maxe)
        {
            maxe = sum;
            ansstart = start;
            ansend = i;
        }

        if(sum < 0)
        {
            sum = 0;
        }
    }

    cout << "Subarray from index " << ansstart << " to " << ansend << endl;

    return maxe;
}

int main()
{
    int n;
    cout << "Enter number of elements: ";
    cin >> n;

    int arr[n];
    cout << "Enter array: "<<endl;
    for(int i = 0; i < n; i++)
    {
        cin >> arr[i];
    }

    int maxval = maxi(arr, n);
    cout << "Max subarray sum is: " << maxval;
}
