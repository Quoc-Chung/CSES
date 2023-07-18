#include<bits/stdc++.h>
using namespace std;
int main(){
    string s;
    cin>>s;
    int res=1;
    int dem=1;
    int len=s.size();
    for(int i=0;i<len;i++){
        if(s[i]==s[i+1]){
            dem++;
        }
        else{
            res=max(res,dem);
            dem=1;
        }
    }
    if(dem==len){
            res=len;
        }
    cout<<res<<endl;
}