#include<iostream>
#include<conio.h>
#include<string>
using namespace std;
int main()
{
int hold;
string s;
getline(cin,s);
if(s.size()==1)
    cout<<s[0];
else
{for(int i=0; i<s.size()-2; i++)
{
for(int j=0; j<s.size()-2; j++)
{

 if(s[j]>s[j+2])
{
hold=s[j];
s[j]=s[j+2];
s[j+2]=hold;

}
}
}

cout<<s;
}
return 0;
}

