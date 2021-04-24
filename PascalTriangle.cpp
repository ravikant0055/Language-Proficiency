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
    int n,ans;
    cin>>n;
    for(int i=0; i<=n;i++){
        for(int j=0; j<=i; j++){
            cout<<fact(i)/(fact(i-j)*fact(j))<<" ";
        }
      cout<<endl;
    }
    
    return 0;
}