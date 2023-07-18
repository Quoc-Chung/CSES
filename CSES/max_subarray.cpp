#include<bits/stdc++.h>
using namespace std;
int main (){
    int n;
    cin>>n;
    long long a[n];
    for(long long &x:a){
        cin >>x;
    }

    long long res = INT_MIN;
    long long sum = 0;
    for (int i = 0; i < n; i ++) {
    sum = max(a[i], sum + a[i]);
    res= max(res,sum);
       }
    cout << res <<endl;
}
