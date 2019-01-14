#include<iostream>
using namespace std;
int main()
{
    int n=0;
    int ar[100000];
    int cnt=0;
    int i=0;
    int max=0;
    cin>>n;
    for(i=0;i<n;i++)
    {
           cin>>ar[i];
    }
    max=ar[0];
    for(i=0;i<n;i++)
    {
        if(ar[i]>max)
        {
            max=ar[i];
        }
    }
    for(i=0;i<n;i++)
    {
        if(ar[i]==max)
        {
            cnt++;
        }
    }
    cout<<cnt;
}


