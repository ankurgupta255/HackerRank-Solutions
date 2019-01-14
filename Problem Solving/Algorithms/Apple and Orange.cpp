#include<iostream>
using namespace std;
int main()
{
    int s,t,a,b,m,n;
    int d1[100000];
    int d2[100000];
    int cnt1,cnt2;
    cin>>s;
    cout<<"  ";
    cin>>t;
    cout<<endl;
    cin>>a;
    cout<<"  ";
    cin>>b;
    cout<<endl;
    cin>>m;
    cout<<"  ";
    cin>>n;
    for(int i=0;i<m;i++)
    {
        cin>>d1[i];
    }
    for(int i=0;i<n;i++)
    {
        cin>>d2[i];
    }
    for(int i=0;i<m;i++)
    {
        if((a+d1[i])>=s && (a+d1[i])<=t)
            cnt1++;
        if((b+d1[i])>=s && (b+d1[i])<=t)
            cnt2++;
    }
    cout<<cnt1<<"  "<<cnt2;
    
}


