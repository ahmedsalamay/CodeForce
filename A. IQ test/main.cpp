#include <iostream>
using namespace std;
int main()
{
    int n,x=0,y=0;
    cin>>n;
    int arr[n];
    for(int i=0;i<n;i++)
        cin>>arr[i];
    for(int i=0;i<n;i++)
    {
        if(arr[i]%2==0)
            x++;
        if(arr[i]%2!=0)
            y++;
    }
            for(int i=0;i<n;i++)
            {
                if(x<y)
                {
                    if(arr[i]%2==0)
                        cout<<i+1;
                }
                if(y<x)
                {
                    if(arr[i]%2!=0)
                        cout<<i+1;
                }
            }
    return 0;
}
