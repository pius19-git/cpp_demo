#include<iostream>
using namespace std;

int main()
{
    int a,b,ans;
    char str[50];
    cout<<"enter 2 numbers\n";
    cin>>a>>b;
    ans=(a>b)?a:b;
    cout<<"Largest is "<<ans;
    return 0;
}