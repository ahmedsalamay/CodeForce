/*#include <iostream>
using namespace std;
struct FullName
{
    char fname[20];
    char mname[20];
    char lname[20];
};
struct student
{
    int age;
    double GPA;
    FullName name;
};
student GetMax(student *arr,int n)
{
    int h=0;
    int y;
    for(int i=0;i<n;i++)
    {
    if(h<arr[i].GPA)
        {
            h=arr[i].GPA;
            y=i;
        }
    }
cout<<"Max 1"<<"Name: "<<arr[y].name.fname<<" "<<arr[y].name.mname<<" "<<arr[y].name.lname<<endl;
cout<<arr[y].age<<endl<<arr[y].GPA;
}
student read(student *arr,int n)
{
    for(int i=0;i<n;i++)
    {
        cin>>arr[i].name.fname;
    cin>>arr[i].name.mname;
    cin>>arr[i].name.lname;
    cin>>arr[i].age;
        cin>>arr[i].GPA;

    }
}
student print(student *arr,int n)
{
    for(int i=0;i<n;i++)
    {
        cout<<arr[i].name.fname<<" ";
    cout<<arr[i].name.mname<<" ";
    cout<<arr[i].name.lname<<" "<<endl;
    cout<<"Age "<<arr[i].age<<endl;
        cout<<"GPA "<<arr[i].GPA<<endl;

    }
}
int main()
{
    int n;
    cin>>n;
    student *arr=new student[n];
    read(arr,n);
    print (arr,n);
    GetMax(arr,n);
    delete[] arr;

    return 0;
}*/


#include <iostream>
using namespace std;
int prime(int n,int k)
{
    if(n==2)
        return 0;
     if(k==n||n==1)
    {
        cout<<"Yes";
        return 0;
    }
    if(n%k==0)
    {
        cout<<"NO";

        return 0;
    }
    else
    {
        k++;
        prime(n,k);

    }
}
int main()
{
    int n,k=2;
    cin>>n;
    prime(n,k);
    return 0;
}
