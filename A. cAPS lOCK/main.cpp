#include<iostream>
#include<string>
using namespace std;
int main()
{
    int x=0;
   string s;
    getline(cin,s);
    for(int i=0;i<s.size();i++)
    {
        if(s[i]>=65&&s[i]<=95)
            x++;
    }
    for(int i=0;i<s.size();i++)
    {
         if(s.size()==x)
                s[i]+=32;


    }
     if((s.size()-1)==x&&s[0]<=122&&s[0]>=97)
            {
                s[0]-=32;

                for(int i=1;i<s.size();i++)
                {


                s[i]+=32;

            }}
cout<<s;
return 0;

}
