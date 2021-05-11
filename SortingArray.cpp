#include<bits/stdc++.h>
using namespace std;

int main()
{
    int n;
    cout<<"Enter the num of element in array"<<endl;
    cin>>n;

    int arr[n];
    cout<<"Enter the value of array"<<endl;
    for(int i=0; i<n; i++)
    {
        cin>>arr[i];
    }

    for(int i=0; i<n-1; i++)
    {
        for(int j=i+1; j<n; j++)
        {
             int temp = arr[i];
             arr[j] = arr[i];
             arr[i] = arr[j];
        }
    }
    
    cout<<"Sorted array is : ";
    for(int i=0; i<n; i++)
    {
        cout<<arr[i];
    }
    
    return 0;
}