#include<bits/stdc++.h>
using namespace std;
int fact(int n)
{
    int p = 1;
    for(int i=2; i<=n; i++)
     {
       p*=i;
     }
     return p;
}
int main()
{
    int n,r;
    cout<<"Enter a value of N and R : "<<endl;
    cin>>n>>r;
    int ans = fact(n)/(fact(n-r)*fact(r));
    cout<<"NcR is : "<<ans;
    return 0;
}