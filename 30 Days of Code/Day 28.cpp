#include<iostream>
#include<string>
#include<vector>
#include<algorithm>
using namespace std;
int main(){
    int n=0;
    cin>>n;
    string s1;
    string s2;
    string s3="@gmail.com";
    vector<string>v;
    while(n--){
        cin>>s1>>s2;
        if(s2.find(s3)!=string::npos){
            v.push_back(s1);
        }
    }
    sort(v.begin(),v.end());
    for(int i=0;i<v.size();i++){
        cout<<v[i]<<endl;
    }
}
