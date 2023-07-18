#include<bits/stdc++.h>
using namespace std;
int main (){
    int n;
    long long k;
    cin>>n>>k;
    vector<pair<long long,int>> vt(n);
    for(int i=0;i<n;i++){
       cin>>vt[i].first;
       vt[i].second=i+1;
    }
    sort(vt.begin(),vt.end());
    int left=0,right=n-1;
    int flag=0;// cắm cờ 
    while(left<right && flag==0){
        long long tong=vt[left].first+vt[right].first;
        if(tong==k){
            cout<<vt[left].second<<" "<<vt[right].second<<endl;
            flag=1;
        }
        else if(tong<k){
            left++;
        }
        else{
            right--;
        }
    }
    if(flag==0){
        cout<<"IMPOSSIBLE"<<endl;
    }
}