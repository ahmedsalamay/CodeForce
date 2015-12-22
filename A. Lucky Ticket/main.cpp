#include <iostream>

using namespace std;

int main()
{
    int n,s=0,m=0,ans=0;
    cin>>n;
    int *arr=new int[n];
    for(int i=0 ;i<n;i++)
        cin>>arr[i];
        for(int i=0;i<(n/2);i++)
                s+=arr[i];
        for(int i=(n/2);i<n;i++)
        m+=arr[i];

for(int i=0 ;i<n;i++)
        {if(arr[i]==7||arr[i]==4)
            ans++;}
 if(ans==n&&m==s)
 {cout<<"YES";}
    else
    cout<<"NO";

    delete []arr;
    arr=0;
    return 0;
}
/*Test: #3, time: 0 ms., memory: 0 KB, exit code: 0, checker exit code: 1, verdict: WRONG_ANSWER
Input
4
4774
Output
NO
Answer
YES
Checker Log
wrong answer 1st words differ - expected: 'YES', found: 'NO'
*/
