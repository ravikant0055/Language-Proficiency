#include<bits/stdc++.h>
using namespace std;
int main()
{
    int n;
    cout<<"Enter a Num : ";
    cin>>n;
    cout<<"Factors are : ";
    for(int i=1; i<=n; i++)
    {
        if(n%i==0)
        {
            cout<<i<<",";
        }
    }

    return 0;
}