#include <iostream>

using namespace std;

int main()
{
    int l=0;
    int g;
cin>>g;
   int *x=new int [g];
   for(int i=0;i<g;i++)
   {
       cin>>x[i];
       l=l+x[i];
   }
   if(l%4==0)
    cout<<l/4;
   else
    cout<<(l/4)+1;
    return 0;
    delete []x;
    x=0;
}
