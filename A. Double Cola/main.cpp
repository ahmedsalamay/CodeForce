#include <iostream>
using namespace std;
int main()
{
    int x;
    string s="SLPRH";
    for(int i=0;i<1000000;i++)
    {
        if(s[i]=='S')
            s+="SS";
        if(s[i]=='L')
            s+="LL";
        if(s[i]=='P')
            s+="PP";
        if(s[i]=='R')
            s+="RR";
        if(s[i]=='H')
            s+="HH";
    }
    cin>>x;
    if(s[x-1]=='S')
        cout<<"Sheldon";
    else if(s[x-1]=='P')
    cout<<"Penny";
    else if(s[x-1]=='L')
        cout<<"Leonard";
    else if(s[x-1]=='R')
        cout<<"Rajesh";
    else cout<<"Howard";
    return 0;
}
