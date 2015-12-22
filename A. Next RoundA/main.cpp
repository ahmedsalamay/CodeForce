#include <iostream>
using namespace std;
int main()
{
    int n,k,ans=0;
    cin>>n>>k;
    int*arr=new int [n];
    for(int i=0;i<n;i++)
    {
        cin>>arr[i];
        if(arr[i]>k)
            ans++;
    }
    cout<<ans;
    delete []arr;
    arr=0;
    return 0;
}
