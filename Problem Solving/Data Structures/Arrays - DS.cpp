#include<iostream>
using namespace std;
int main()
{
    int i=0;
    int N=0;
    int A[1000];
    cin>>N;
    for(i=0;i<N;i++)
    {
        cin>>A[i];
    }
    for(i=(N-1);i>=0;i--)
        cout<<A[i]<<" ";
}


