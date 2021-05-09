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

int binarySearch(int arr[], int n, int x)
{
    int s=0;
    int e=0;
    while(s<=e)
    {
        int mid = (s+e)/2;

        if(arr[mid] == x)
        {
            return mid;
        }
        else if(arr[mid] < x)
        {
            s = mid+1;
        }
        else
        {
           e = mid-1;
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

     int ch;
     cout<<"Enter your choice"<<endl;
     cout<<"1.Linear Search"<<endl;
     cout<<"2.Binary Search"<<endl;
     cin>>ch;

     switch(ch)
     {
         case 1 : cout<<"Search element is : "<<linearSearch(arr , n , x);
                  break;
         case 2 : cout<<"Serach element is : "<<binarySearch(arr, n , x);
                  break;

         default : cout<<"Wrong num"; 
     }         
     
     return 0;
}