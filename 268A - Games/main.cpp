#include <iostream>
using namespace std;

int main()
{
   int N,s=0;
   int H[4];
   int A[4];
   cin>>N;
   for(int i=0;i<N;i++)
   {
     cin>>H[i]>>A[i];                         //TRY TO MAKE DYNAMIC ARRAY//

   }
   for(int i=0;i<N;i++)
   {
       for(int j=0;j<N;j++)
       {
           if(i!=j&&H[i]==A[j])
            s++;
       }
   }
   cout<<s;
    return 0;
}
