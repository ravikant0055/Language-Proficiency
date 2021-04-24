#include<bits/stdc++.h>
using namespace std;
int main()
{
    int n, fact=1;
    cout<<"Enter a Num : "<<endl;
    cin>>n;
    for(int i=2; i<=n; i++)
     {
       fact*=i;
     }
    cout<<"Factorial is : "<<fact;
    
    return 0;
}