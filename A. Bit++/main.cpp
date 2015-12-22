#include <iostream>
#include<cstring>

using namespace std;

int main()
{
   int x=0,n;
   cin>>n;
   string str;
   for(int i=0;i<n;i++)
   {
       cin>>str;
       if(str==("X++")||str==("++X"))
        x++;
        if(str==("X--")||str==("--X"))
        x--;
   }
   cout<<x;
    return 0;
}
