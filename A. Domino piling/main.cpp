#include <iostream>
using namespace std;

int main()
{
    int m,n,x;
    cin>>m>>n;
    x=m*n;
    if(x%2==0)
        cout<<x/2;
    else
        cout<<(x-1)/2;
    return 0;
}
