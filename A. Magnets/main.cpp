#include <iostream>
#include<cstring>
using namespace std;

int main()
{
    int n,x=1;
    cin>>n;
    char c[12];
    for(int i=0;i<(n*2);i++)
        cin>>c[i];
        for(int i=0;i<(n*2);i++)
        {
            if(c[i]==c[i+1])
            {
                x++;
            }
        }
        cout<<x;


    return 0;
}
