#include<bits/stdc++.h>
using namespace std;
int main()
{
    int n;
    cout<<"Enter a Num : ";
    cin>>n;
    int original = n;
    int rev = 0;
    while(n!=0)
    {
        int temp = n%10;
        rev = rev*10 + temp;
        n = n/10;
    }

    if(rev==original)
    {
        cout<<"Palindrome"<<endl;
    }
    else
    {
        cout<<"Not Palindrome"<<endl;
    }
    
    return 0;
}