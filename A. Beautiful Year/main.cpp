/*#include <iostream>
#include<string>
#include<sstream>
using namespace std;
int main()
{
   int x,n=0;
   string s;
   cin>>x;
   x++;
   while(1)
   {
stringstream ss;
       ss<<x;
       ss>>s;
       if(s[0]==s[1]||s[0]==s[2]||s[0]==s[3]||s[1]==s[2]||s[1]==s[3]||s[2]==s[3])
         {
            ss<<s;
            ss>>x;
            x++;
        }

       else
        {cout<<x;
        break;
        }
   }

    return 0;
}


*/



#include <iostream>
#include<string>
#include<sstream>
using namespace std;
int main()
{
    int x,y;
    cin>>x;
    string s;
    x++;
   while(1)
   {stringstream ss;
   ss<<x;
    ss>>s;
   for(int i=0;i<s.size()-1;i++)
   {y=0;
       for(int j=i+1;j<s.size();j++)
       {
           if(s[i]==s[j])
           {
               s.empty();
               y++;
               break;
           }
       }
       if(y>0)
       {
           break;
       }
   }
   if(y>0)
   {


    ss<<s;
    ss>>x;
    x++;
   }
   else
   {
       cout<<s;
       break;
   }
   }
    return 0;
}

/* while(1)
   {
   ss<<x;
   ss>>s;
   if(s[0]!=s[1]&&s[0]!=s[2]&&s[0]!=s[3]&&s[1]!=s[2]&&s[1]!=s[3]&&s[2]!=s[3])
   {
       cout<<s;
       return 0;
   }
   else
   {
       ss<<s;
       ss>>x;
       x++;
   }
   }
*/
