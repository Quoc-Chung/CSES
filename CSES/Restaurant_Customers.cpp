#include<bits/stdc++.h>
using namespace std;
int main (){
    int n;
    cin >> n;
    /*-Tao vecto luu thoi gian den-*/
    vector <pair<long long,int>> vt;
    for(int i=0;i<n;i++){
        long long start,end;
        cin>> start >> end;
        vt.push_back({start,1});
        vt.push_back({end,-1});
    }
    /*--Sap xep lai tg den tang dan--*/
    sort(vt.begin(),vt.end());
    long long result=INT_MIN;
    long long tong =0;
    for(int i=0;i<vt.size();i++){
     tong+=vt[i].second;
        result=max(result,tong);
    }
  cout<<result<<endl;
}