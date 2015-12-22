#include <iostream>
#include<cstring>
#include<algorithm>
using namespace std;

int main()
{
    string str1;
    string str2;
    int s=0,m=0;
    cin>>str1;
    cin>>str2;
        for(int i=1;i<str1.size();i++)
    {if(str1[i]<=95&&str1[i]>=65)
    str1[i]+=32;
        s+=str1[i];
    }
     for(int i=1;i<str2.size();i++)
    {if(str2[i]<=95&&str2[i]>=65)
    str2[i]+=32;
    m+=str2[i];
    }
     if(m<s)
        cout<<"1";
    else if(s<m)
        cout<<"-1";
    else cout<<"0";

    return 0;
