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

int InsertionSort(int arr[], int n)
{   
    int i;
    for(i=0; i<n; i++)
    {
       int key = arr[i];
       int j = i-1;

       while(arr[j]>key && j>=0)
       {
          arr[j+1] = arr[j];
          j--;
       }

       arr[j+1] = key;
    }
    return arr[i];
}

void printarray(int arr[], int n)
{
    cout<<"Sorted array is : ";
    for(int i=0; i<n; i++)
    {
        
        cout<<arr[i]<<" ";
    }
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
    
    int ch;
    cout<<"Choice the Option"<<endl;
    cout<<"1. Selection Sort"<<endl;
    cout<<"2. Bubble Sort"<<endl;
    cout<<"3. Insertion Sort"<<endl;
    cin>>ch;
    switch (ch)
    {
        case 1:  SelectionSort(arr, n);
                 printarray(arr, n);
                 break;

        case 2:  BubbleSort(arr, n);
                 printarray(arr, n);
                 break;         
        
        case 3:  InsertionSort(arr, n);
                 printarray(arr, n);
                 break;

        default: cout<<"Wrong Option";
                 break;
    }
    
    return 0;
}