#include<bits/stdc++.h>
using namespace std;
int SelectionSort(int arr[], int n)
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

int BubbleSort(int arr[], int n)
{
    int i;
    for(int j=1; j<n; j++)
    {
       for(i=0; i<n-j; i++)
       {
           if(arr[i]>arr[i+1])
           {
              int temp = arr[i];
              arr[i] = arr[i+1];
              arr[i+1] = temp;
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

    SelectionSort(arr, n);
    BubbleSort(arr, n);
    
    cout<<"Sorted array is : ";
    for(int i=0; i<n; i++)
    {
        
        cout<<arr[i]<<" ";
    }
    
    return 0;
}