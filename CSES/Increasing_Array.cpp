#include<bits/stdc++.h>
using namespace std;
int main (){
    int n;
    cin>>n;
    long long a[n];
    for(long long &x:a){
        cin >>x;
    }
    int i=1;
    long long res=0;
    while(i<n){
        if(a[i]>=a[i-1]){
            i++;
        }
        else{
        while(a[i]<a[i-1]){
            a[i]++;
            res++;
        }
        }
    }
    cout<<res<<endl;
}