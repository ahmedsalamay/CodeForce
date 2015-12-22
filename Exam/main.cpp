/*#include <iostream>
using namespace std;
int StringLength(char st[])
{
    int i=0;
    while(st[i]!='\0')
    {
        i++;
    }
    return i;
}
int main()
{
    char st[]="hi";
   int x= StringLength(st);
   cout<<x;
    return 0;
}*/

/*#include <iostream>
using namespace std;
char f(char s1[],char s2[])
{
    char s3[20];
    for(int i=0;i<6;i++)
    {
        s3[i]=s1[i];
    }
    for(int i=0;i<6;i++)
    {
        s3[i+6]=s2[i];
    }
    cout<<s3;
}
int main()
{
    char s1[]="AHmed ";
    char s2[]="Salama";
    f(s1,s2);


    return 0;
}

*/
/*
#include <iostream>
using namespace std;
int StringAt(char st[],char c)
{
    int x=-1;

    for(int i=0;i<11;i++)
    {
        if(st[i]==c)
        {
             x=i;
            break;
        }

    }
    if(x>=0)
        return x;
    else return -1;

}
int main()
{
char st[]="AhmedSalama";
char c='z';
int x=StringAt(st,c);
cout<<x;
    return 0;
}
*/

#include<iostream>
using namespace std;
int st(char s1[],char s2[])
{
    int x=0;
    for(int i=0;i<5;i++)
    {
        if(s1[i]>s2[i])
        {
            x=1;
            break;
        }
        else if(s1[i]<s2[i])
        {
            x=-1;
            break;
        }
        if(i==6&&s1[i]==s2[i])
        {
            x=0;
            break;
        }

    }
    return x;
}
int main()
{
    char s1[]="AHmed";
    char s2[]="ALi";
   int x= st(s1,s2);
   cout<<x;

    return 0;
}
*
