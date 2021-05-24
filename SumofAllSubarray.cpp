#include<bits/stdc++.h>
using namespace std;
int main()
{
    int n, sum=0;
    cout<<"Enter the num of element in array : ";
    cin>>n;
    
    int arr[n];
    cout<<"Enter the value of array"<<endl;
    for(int i=0; i<n; i++)
    {
        cin>>arr[i];
    }
    
    cout<<"Sum of subarray"<<endl;
    for(int i=0; i<n; i++)
    {
        for(int j=i; j<n; j++)
        {
            sum+=arr[j];
            cout<<sum<<endl;
        }
    }
    
     return 0;

}