#include<bits/stdc++.h>
using namespace std;
int main (){
    int n;
    cin >>n;
    long long a[n];
    long long  tong=0;
    for (int i=0;i<n;i++){
        cin >>a[i];
        tong+=a[i];
    }
    sort(a,a+n,greater<long long>());
    cout<<max(2*a[0],tong);
}