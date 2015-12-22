#include<iostream>
using namespace std;
int main()
{
    int arr[2][2]={{1,2},{3,4}},arr2[2]={2};
    for(int i=0;i<1;i++)
    {
        for(int j=0;j<2;j++)
        {
            arr2[j]=2;
        }
    }
    cout<<arr[0];
}
