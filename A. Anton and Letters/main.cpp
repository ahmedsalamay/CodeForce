#include<iostream>
#include<string>
using namespace std;
int main()
{
    string s,s2;
    getline(cin,s);
    int n=0;
     for(char i='a';i<='z';i++)
    {
        for(int j=0;j<s.size();j++)
        {
            if(s[j]==i)
            {
                n++;
                break;

            }
        }
    }
    cout<<n;
    return 0;
}





















/*#include <iostream>
#include<string>
using namespace std;
int main()
{
    string s;
    string c;
    getline(cin,s);
    int n=0;
     for(char i='a';i<'z';i++)
    {
        for(int j=0;j<s.size();j++)
        {
            if(s[j]==i)
            {
                c[n]=i;

                break;

            }
        }
    }
cout<<c[1];

    return 0;
}*/

