#include<bits/stdc++.h>
using namespace std;

void prime(){                                                  
    int n,i;
    cout<<"Dude enter a number : ";
    cin>>n;
    for(i=2;i<n;i++){
        if(n%i==0){
            cout<<"Aww bruh your num is not prime"<<endl;
            break;
        }
    }
    if(i==n){
        cout<<"Congro dude your num is prime"<<endl;
    }
}

void allprime(){
    int a,b;
    cout<<"Hey enter the range"<<endl;
    cin>>a>>b;
    for(int n=a; n<=b; n++){
        int i;
        for(i=2;i<n;i++){
             if(n%i==0){
                 break;
             }
        }
        if(i==n){
            cout<<n<<" "<<"is prime"<<endl; 
        }
    }
}

int main()
{   
    int ch;
    cout<<"1. Program to find the number is prime or not"<<endl;
    cout<<"2. Program to print all prime number in given range"<<endl;
    cout<<"Enter your choice : "<<endl;
    cin>>ch;
    switch (ch)
    {
    case 1 : prime(); 
           break;

    case 2 : allprime(); 
           break;       
    
    default: cout<<"Wrong choice......!";
        break;
    }
    return 0;
}