#include <iostream>
using namespace std;
int main()
{
   string c;
   cin>>c;
   int i=0,x=0;
   while(c[i]!='\0')
   {
       if(c[i]=='4'||c[i]=='7')
        x++;
        i++;
   }

if(x==i&&(c.size()==7||c.size()==4))
    cout<<"YES";

    else cout<<"NO";
    return 0;
}

/*for(j=(c.size()-1);j>-1;j--)
{
    c[j]=(c[j]-48);
    l=l+(c[j]*n);
    n*=10;
    else if(l%4==0||l%7==0)
    cout<<"YES";
}
*/
