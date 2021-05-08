#include<bits/stdc++.h>
using namespace std;
int main()
{
    int arr[5];
    cout<<"Enter the array values"<<endl;

    for(int i=0 ; i<5; i++)
    {
        cin>>arr[i];
    }

    int minnum = INT_MAX;
    int maxnum = INT_MIN;

    for(int i=0; i<5; i++)
    {
        minnum = min(minnum , arr[i]);
        maxnum = max(maxnum , arr[i]);
    }

    cout<<"Minimum : "<<minnum<<endl;
    cout<<"Maximum : "<<maxnum<<endl;

}