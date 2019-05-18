#include <bits/stdc++.h>
using namespace std;
int main()
{
    int n;
    cin >> n;
    cin.ignore(numeric_limits<streamsize>::max(), '\n');
    int a[100];
    int i=0;
    while(n>0){
        a[i]=n%2;
        n/=2;
        i++;
    }
    int cnt=0;
    int max=0;
    for(int j=0;j<i;j++){
        if(a[j]==1){
            cnt++;
        }
        else if(a[j]==0){
            if(cnt>max){
                max=cnt;
            }
            cnt=0;
        }
    }
    if(cnt>max){
        max=cnt;
    }
    cout<<max;
    return 0;
}