#include<iostream>
using namespace std;
int main()
{
    int arr[6][6];
    int i=0;
    int j=0;
    int k=0;
    int sum[1000];
    int cnt=0;
    int max=0;
    for(i=0;i<6;i++)
    {
        for(j=0;j<6;j++)
        {
            cin>>arr[i][j];
        }}
        for(i=0;i<4;i++)
        {
        for(j=0;j<4;j++)
        {
            sum[k]=(arr[i][j] + arr[i][j+1] + arr[i][j+2] + arr[i+1][j+1] + arr[i+2][j] + arr[i+2][j+1] + arr[i+2][j+2]);
            k++;
    }}
            max=sum[0];
            for(i=0;i<k;i++)
            {
                if(sum[i]>max)
                    max=sum[i];
            }
            cout<<max;
}