#include <iostream>

using namespace std;

int main()
{
    int n,m,k;
    cin>>n>>m;
     int arr[m],arr2[m][n],arr3[n][2];
    for(int i=0;i<m;i++)
    {
        cin>>arr[i];
    }
    for(int i=0;i<m;i++)
    {
         k=i;
        for(int j=0;j<n;j++)
        {
            arr2[i][j]=arr[k];
            k++;
            if(k==6)
                k=0;
        }
    }
     for(int i=0;i<m;i++)
    {
        for(int j=0;j<n;j++)
        {
           cout<<arr2[i][j]<<" ";
        }
cout<<endl;
    }
    int h=arr2[0][0],l=arr2[0][0];
     for(int i=0;i<m;i++)
    {
        for(int j=0;j<n;j++)
        {
           if(arr2[i][j]>h)
            h=arr2[i][j];
            if(arr2[i][j]<l)
                l=arr2[i][j];

          arr3[i][0]=l;
            arr3[i][1]=h;
        }
    }
     for(int i=0;i<m;i++)
    {
        for(int j=0;j<2;j++)
        {
           cout<<arr3[i][j]<<" ";
        }
        cout<<endl;
    }
    /*ht3ml dynamic array t5zn feha el elpaizl elly talbha we b3l kda t3ml 2d dynamic array t7ot feha kol 4 arkam m3 b3d kol el27tmalat y3ini
    we b3l kda ttr7 kol arb3 arkam elkbir feha m3 elso3'yr we b3d kda t7ot kol natig feha fe 1d dynami carray*/
    return 0;
}
