/*#include<iostream>
using namespace std;
int main ()
{
    char str[5]={'a','s','d'};
    cout<<str;
}*/
#include<iostream>
using namespace std;
int **add(int **m1,int **m2,int r,int c)
{
    int **res;
     res=new int*[r];
    for(int i=0;i<r;i++)
    {
        res[i]=new int [c];
    }
    for(int i=0;i<r;i++)
    {
        for(int j=0;j<c;j++)
        {
           res[i][j]=m1[i][j]+m2[i][j];
        }
    }

    return res;
}
int **mul(int **m1,int **m2,int r,int c)
{
    int **res;
     res=new int*[r];
    for(int i=0;i<r;i++)
    {
        res[i]=new int [c];
    }
    if(r==c)
    {
    for(int i=0;i<r;i++)
    { int a=0,z=0;
        for(int j=0;j<c;j++)
        {
            for(int k=0;k<c;k++)
            {
            z+=(m1[i][k]*m2[k][j]);
            if(k==c-1)
            {
                res[i][a]=z;
                a++;
                z=0;
            }
            }
        }
    }
    }
    else cout<<"Cant";
    return res;

}
/*
int main()
{
    int **m1; int **m2; int r,c;
    cin>>r>>c;
    m1=new int*[r];
    m2=new int*[r];
    for(int i=0;i<r;i++)
    {
        m1[i]=new int [c];
        m2[i]=new int [c];
    }
    for(int i=0;i<r;i++)
    {
        for(int j=0;j<c;j++)
        {
            cin>>m1[i][j];
        }
    }
        cout<<endl<<endl;

    for(int i=0;i<r;i++)
    {
        for(int j=0;j<c;j++)
        {
            cin>>m2[i][j];
        }
    }
        cout<<endl<<endl;

    int **res1= add(m1,m2,r,c);
    for(int i=0;i<r;i++)
    {
        for(int j=0;j<c;j++)
        {
            cout<<res1[i][j]<<"   ";
        }
        cout<<endl;
    }
    cout<<endl<<endl;
    int **res2= mul(m1,m2,r,c);
    for(int i=0;i<r;i++)
    {
        for(int j=0;j<c;j++)
        {
            cout<<res2[i][j]<<"   ";
        }
        cout<<endl;
    }
    cout<<endl<<endl;
    for(int i=0;i<r;i++)
    {
        delete[]m1[i];
        delete[]m2[i];
    }
    delete [] m1;
    delete [] m2;
    return 0;
}





*/
























#include <iostream>
using namespace std;
int main()
{
    int arr1[3][3],arr2[3][3],arr3[3][3],arr4[3][3],arr5[3][3];
    for(int i=0;i<3;i++)
    {
        for(int j=0;j<3;j++)
        {
            cin>>arr1[i][j];
        }
    }
    cout<<endl<<endl;
    for(int i=0;i<3;i++)
    {
        for(int j=0;j<3;j++)
        {
            cin>>arr2[i][j];
        }
    }
    cout<<endl<<endl;
    for(int i=0;i<3;i++)
    {
        for(int j=0;j<3;j++)
        {
            cout<<arr1[i][j]+arr2[i][j]<<"   ";
        }
        cout<<endl;
    }
    cout<<endl<<endl;
    for(int i=0;i<3;i++)
    { int a=0,z;
        for(int j=0;j<3;j++)
        {
            for(int k=0;k<3;k++)
            {
            z+=(arr1[i][k]*arr2[k][j]);
            if(k==2)
            {
                arr3[i][a]=z;
                a++;
                z=0;
            }
            }
        }
    }
for(int i=0;i<3;i++)
{
    for(int j=0;j<3;j++)
    {
        cout<<arr3[i][j]<<"       ";
    }
    cout<<endl;
}
cout<<endl<<endl;
for(int i=0;i<3;i++)
{
    for(int j=0;j<3;j++)
    {
        arr4[i][j]=arr1[j][i];
    }
}
for(int i=0;i<3;i++)
{
    for(int j=0;j<3;j++)
    {
        cout<<arr4[i][j]<<"  ";
    }
    cout<<endl;
}
    return 0;
}
/*#include<iostream>
using namespace std;
int main()
{
    int n,i,j;
    cin>>i>>j;
    for(int l=i+1;l<j;l++)
    {
        n=l;
    for(int k=0;;k++)
    {
    if(n==1)
        break;
        if(n%2!=0)
            n=3*n+1;
        else
            n=n/2;
            cout<<n<<" ";
    }
    cout<<endl;
    }
    return 0;
}
*/


/*#include<iostream>
using namespace std;
int main()
{
    int n,i,j;
    cin>>i>>j;
    for(int l=i+1;l<j;l++)
    {
        n=l;
    for(int k=0;;k++)
    {
    if(n==1)
        break;
        if(n%2!=0)
            n=3*n+1;
        else
            n=n/2;
            cout<<n<<" ";
    }
    cout<<endl;
    }
    return 0;
}
*/
