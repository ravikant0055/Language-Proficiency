#include<bits/stdc++.h>
using namespace std;
int s(int arr[], int n)
{
    int i;

    for(i=0; i<n-1; i++)
    {
        for(int j=i+1; j<n; j++)
        {
           if(arr[j]<arr[i])  
           {
             int temp = arr[j];
             arr[j] = arr[i];
             arr[i] = temp;
           }  
        }
    }

    return arr[i];
}

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

    s(arr,n);
    
    cout<<"Sorted array is : ";
    for(int i=0; i<n; i++)
    {
        
        cout<<arr[i]<<" ";
    }
    
    return 0;
}