#include<iostream>
using namespace std;
int main()
{
    int s,t;
    char temp;
    string c;
    cin>>s>>t;
    cin>>c;
    for(int i=0;i<t;i++)
    {
        for(int j=0;j<c.size();j++)
        {
            if(c[j]=='B'&&c[j+1]=='G')
            {
                temp=c[j];
                c[j]=c[j+1];
                c[j+1]=temp;
                j++;
            }
        }
    }
    cout<<c;
    return 0;
}
