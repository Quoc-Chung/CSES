#include<bits/stdc++.h>
using namespace std;
long long DemSoLuong(long long a[],int n){
    sort(a,a+n);
    long long mid = a[n/2];
    long long result=0;
    for(int i=0;i<n;i++){
       result+=abs(mid-a[i]);
    }
   return result;
}
int main (){
    int  n;
    cin>>n;
    long long a[n];
    for(long long &x:a){
        cin>>x;
    }
    cout<<DemSoLuong(a,n)<<endl;
    return 0;
}