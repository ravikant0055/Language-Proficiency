#include<bits/stdc++.h>
using namespace std;
int main()
{
    int n;
    cout<<"Enter a num : ";
    cin>>n;
    int sum = 0;
    int original = n;
    while(n>0)
    {
        int temp = n%10;
        sum+= temp*temp*temp;
        n=n/10;
    }
    
    if(sum==original){
        cout<<"Armstrong Number"<<endl;
    }
    else 
    {
        cout<<"Not Armstrong"<<endl;
    }

    return 0;
}