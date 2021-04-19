#include <bits/stdc++.h>
using namespace std;
int main()
{
     int num ,rev=0;
     cout<<"Enter a num : ";
     cin>>num;
     while(num!=0)
     {
       int temp=num%10;
       rev = rev*10 + temp;
       num=num/10;
     }
     
     cout<<"Reverse num : "<<rev;
     
     return 0;
}