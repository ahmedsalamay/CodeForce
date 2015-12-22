#include<iostream>
using namespace std;
int main()
{
    string s;
    cin>>s;
    if(s[0]!='1')
    {
        cout<<"NO";
        return 0;
    }
    for(int i=0;i<s.size();i++)
    {
        if(s[i]!='1'&&s[i]!='4')
        {
            cout<<"NO";
            return 0;
        }
    }
    int x=0;
    for(int i=0;i<s.size();i++)
    {
        if(s[i]=='4')
        {
            x++;
        }
    }
    int z=0;
    for(int i=0;i<s.size();i++)
    {
        if((s[i]=='4'&&s[i-1]=='1'&&s[i+1]=='1'))
            z++;
            else if(s[i]=='4'&&s[i-1]=='4'&&s[i-2]=='1')
                z++;
            else if (s[i]=='4'&&s[i-1]=='1'&&s[i+1]=='\0')
                z++;
            else if (s[i]=='4'&&s[i-1]=='1'&&s[i+1]=='4')
                z++;
            else if (s[i]=='4'&&s[i-1]=='4'&&s[i+1]=='\0'&&s[i-2]=='1')
                z++;
    }
       if(x!=z)
        cout<<"NO";
    else cout<<"YES";

    return 0;
}
