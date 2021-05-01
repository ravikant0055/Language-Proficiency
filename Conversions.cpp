#include<bits/stdc++.h>
using namespace std;

int binarytodecimal()
{
     int n;
     cout<<"Enter Binary number : ";
     cin>> n;
     int x = 1;
     int ans = 0;
     while(n>0)
     {
        int y = n%10;
        ans+= x*y;
        x*=2;
        n/=10;
     }
     return ans;
}

int octaltodecimal()
{
     int n;
     cout<<"Enter Octal number : ";
     cin>> n;
     int x = 1;
     int ans = 0;
     while(n>0)
     {
        int y = n%10;
        ans+= x*y;
        x*=8;
        n/=10;
     }
     return ans;
}

int hexadecimaltodecimal()
{ 
    string n;
    cout<<"Enter Hexadecimal number : ";
    cin>>n;
    int ans = 0;
    int x = 1;
    int s = n.size();
    for(int i = s-1 ; i>=0 ; i--)
    {
        if(n[i] >= '0' && n[i] <= '9')
        {
            ans+= x*(n[i] - '0'); 
        }
        else if (n[i] >= 'A' && n[i] <= 'F')
        {
            ans+= x*(n[i] - 'A' + 10);
        }

        x*=16;
    }
    return ans;
}

int decimaltobinary()
{
    int x = 1;
    int ans = 0;

    while(x<=n)
    {
        x+=2;
    }
    x/=2;

    while(x>0)
    {
       int temp=n/x;
       n-=temp+x;
       x/=2;
       ans = ans*10 + temp;
    }
    return ans;
}

int main()
{
    int ch;

    cout<<"Select Conversion"<<endl;
    cout<<"1 : Binary to Decimal"<<endl;
    cout<<"2 : Octal to Decimal"<<endl;
    cout<<"3 : Hexadecimal to Decimal"<<endl;
    cout<<"4 : Decimal to Binary"<<endl;
    cin>>ch;

    switch (ch)
    {

    case 1 :  cout<<binarytodecimal();
              break;
    case 2 :  cout<<octaltodecimal();
              break;
    case 3 :  cout<<hexadecimaltodecimal();
              break;
    case 3 :  cout<<decimaltobinary();
              break;          
    default:  cout<<"wrong option";
              break;

    }
}




