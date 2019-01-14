#include<iostream>
using namespace std;
int main()
{
    int n=0;
    int num=0;
    int nnum=0;
    int diff=0;
    int i=0;
    int grades[60];
    int ngrades[60];
    cin>>n;
    
    for(i=0;i<n;i++)
    {
        cin>>grades[i];
    }
    for(i=0;i<n;i++)
        {
            num=grades[i]/5;
            nnum=(num+1)*5;
            diff=nnum-grades[i];
            if(diff<3 && grades[i]>=38)
            {
                ngrades[i]=nnum;
            }
            else
            {
                ngrades[i]=grades[i];
            }
        }
    for(i=0;i<n;i++)
        cout<<ngrades[i]<<endl;
}


