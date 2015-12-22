#include <iostream>
using namespace std;
int main()
{
    int arr[5][5],x=0,y=0,z=0;
   for(int i=0;i<5;i++)
        for(int j=0;j<5;j++)
        cin>>arr[i][j];
     for(int i=0;i<5;i++)
       {
           for(int j=0;j<5;j++)
           {
               if(arr[i][j]>0)
               {
                   x=i;
                   y=j;
               }
           }
       }
      for(int i=0;i<5;i++)
       {
       if(x==2&&y==2)
        {
            break;
        }
       if(x<2)
       {
           x++;
           z++;
       }
       else if(x>2)
        {
            x--;
       z++;
        }
       if(y<2)
       {
           y++;
           z++;
       }
       else if(y>2)
        {
            y--;
       z++;
        }


       }
       cout<<z;
    return 0;

}

