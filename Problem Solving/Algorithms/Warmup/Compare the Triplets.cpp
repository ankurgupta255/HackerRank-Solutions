#include<iostream>
using namespace std;
int main()
{
int i=0;
int n=3;
int a[100];
int b[100];
int s1=0; 
int s2=0;
for(i=0;i<n;i++)
{
cin>>a[i];
}
for(i=0;i<n;i++)
{
cin>>b[i];
}
for(i=0;i<n;i++)
{
if(a[i]>b[i])
s1+=1;
else if(b[i]>a[i])
s2+=1;
}
cout<<s1<<" "<<s2;
}


