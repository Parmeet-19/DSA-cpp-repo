// Missing value in array 
#include<iostream>
#include<vector>
using namespace std;

int missing(vector<int>& arr, int n)
{
    int sum = (n + 1) * (n + 2) / 2; 
    int s2 = 0;

    for(int i = 0; i < n; i++)
    {
        s2 += arr[i];
    }

    return sum - s2;
}

int main()
{
    cout << "Enter the number of elements in array " << endl;
    int n;
    cin >> n;

    vector<int> arr(n);

    cout << "Enter the array" << endl;
    for(int i = 0; i < n; i++)
    {
        cin >> arr[i];
    }

    int missingvalue = missing(arr, n);
    cout << "Missing number is: " << missingvalue;
}
