#include<iostream>
using namespace std;
int main()
{
int i=0;
int j=0;
int n=0;
cin>>n;
for(i=0;i<n;i++)
{
for(j=0;j<(n-i-1);j++)
{
cout<<' ';
}
for(j=(n-i-1);j<n;j++)
{
cout<<"#";
}
cout<<endl;
}
}


