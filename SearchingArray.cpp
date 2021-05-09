#include<bits/stdc++.h>
using namespace std;

int linearSearch(int arr[], int n, int x)
{
    for(int i=0; i<n; i++)
    {
        if(arr[i] == x)
        {
            return i;
        }
    }
    return -1;
}

int main()
{
     int n;
     cout<<"Enter the size of aaray : ";
     cin>>n;

     int arr[n];
     cout<<"Enter the value of array"<<endl;
     for(int i=0; i<n; i++)
     {
         cin>>arr[i];
     }

     int x;
     cout<<"Enter the search element : ";
     cin>>x;

     cout<<"Search element is : "<<linearSearch(arr , n ,x);

     return 0;
}