#include<bits/stdc++.h>
using namespace std;
int main (){
    int n;
    long long sum;
    cin >>n>>sum;
    vector<pair<long long,int >> vt(n);
    /*--Tạo chuỗi lưu (Giá trị, vị trí)--*/
    for(int i=0;i<n;i++){
        cin >>vt[i].first;
        vt[i].second=i+1;
    }
    /*--Sap xep lai gia tri*/
    sort(vt.begin(),vt.end());
    int left=0;
    while (left<n){
      long long x=sum-vt[left].first;
        for(int mid =left+1,right=n-1;mid<n;mid++){
             while ( (vt[mid].first+vt[right].first) > x){
                right--;              
             }
             if(( mid <right ) &&  (vt[mid].first+vt[right].first)==x){
                cout<< vt[mid].second<<" "<<vt[right].second<<" "<<vt[left].second;
                /*--Thoát khởi chương trình--*/
                return 0;
             }
        }
        left++;
    }
    cout<<"IMPOSSIBLE"<<endl;
    
}