#include<iostream>
#include<algorithm>
using namespace std;
int main(){
    int t=0;
    int n=0;
    int k=0;
    cin>>t;
    int a[1000000];
    for(int i=0;i<t;i++){
        cin>>n>>k;
        int l=0;
        int val=0;
        for(int j=1;j<n;j++){
            for(int l=j+1;l<=n;l++){
                if(j!=l && ((j&l)>val) && ((j&l)<k)){
                    val=j&l;
                }
            }
        }
        cout<<val<<endl;
    }
}
