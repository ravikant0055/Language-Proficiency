#include<bits/stdc++.h>
using namespace std;
int main()
{
    char ch;
    cout<<"Enter a Character : ";
    cin>>ch;

    if(ch=='A' || ch=='E' || ch=='I' || ch=='O' || ch=='U' || ch=='a' || ch=='e' || ch=='i'|| ch=='o' || ch=='u')
    {
       cout<<"Vowel";
    }
    else
    {
        cout<<"Consonant";
    }
    return 0;
}