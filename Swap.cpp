#include<bits/stdc++.h>
using namespace std;
int main()
{
    int a, b, temp;
    cout<<"a=";
    cin>>a;
    cout<<"b=";
    cin>>b;

    temp = a;
    a = b;
    b = temp;
    
    cout<<"Swap number"<<endl;
    cout<<"a="<<a<<endl;
    cout<<"b="<<b<<endl;

    return 0;
}