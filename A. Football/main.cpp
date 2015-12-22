/*#include <iostream>
#include<string>
using namespace std;

int main()
{
    int x=0,z=0;
    string s;
    getline(cin,s);
    char c,d;
    for(int i=0;i<s.size();i++)
    {
        if(x>=7)
            break;
        c=s[i];
        if(s[i]=='0')
            x=0;
        x=x+c-48;

    }
    for(int i=0;i<s.size();i++)
    {
        if(z>=7)
            break;
        d=s[i];
        z=z+d-47;
        if(s[i]=='1')
            z=0;


    }
if (x>=7)
    cout<<"YES";
else if(z>=7)
    cout<<"YES";
    else
        cout<<"NO";

    return 0;
}
*/
#include<iostream>
#include<string>
using namespace std;
int main()
{
    string s;
    getline(cin,s);
   int x,y;
   x= s.find("0000000");
   y=s.find("1111111");
   if(x+1)
    cout<<"YES";
    else if(y+1)
    cout<<"YES";
else cout<<"NO";
}
