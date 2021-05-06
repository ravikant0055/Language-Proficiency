#include<bits/stdc++.h>

using namespace std;

int reverse(int n)
{
    int ans =0;
    while (n!=0)
    {
        int temp = n%10;
        ans = ans*10 + temp;
        n/=10;
    }

    return ans;
}

int main()
{
    int a , b;
    cin>>a,b;

    int ans=0, prevcarry=0;

    while(a>0 && b>0)
    {
        
    }

    while(a>0)
    {

    }

    while(b>0)
    {

    }

    if(prevcarry == 1)
      
      
    ans = reverse(ans); 
    return ans;
}

