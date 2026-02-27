#include<iostream>
using namespace std;

int main()
{
    int arr[100];
    int size;
    int key;
    cout<<"Enter the size of an array "<<endl;
    cin>>size;
    cout<<"Enter the array"<<endl;
    for(int i=0;i<size;i++)
    {
    cin>>arr[i];
    }
    
    cout<<"Enter the Key"<<endl;
    cin>>key;
    for(int j=0;j<size;j++)
    {
        if(arr[j] == key)
    {
        
        cout<<j;
    }
    }
}
