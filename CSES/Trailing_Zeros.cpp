#include<bits/stdc++.h>
using namespace std;
long long giai_thua(int n) {
   long long res = 1;
    for (int i = 2; i <= n; i++) {
        res *= i;
    }
    return res;
}
int dem(int n){
    int tong =0;
    int i=1;
    while(true){
        tong+=n/pow(5,i);
        if(pow(5,i)>n){
            break;
        }
        i++;
    }
    return tong;
}
int main (){
    long long n;
    cin >>n;
    /*
    string s=to_string(giai_thua(n));
    int dem=0;
    for(int i=s.length()-1;i>=0;i--){
        if(s[i]!='0'){
            break;
        }
        if(s[i]=='0'){
            dem++;
        }
    }
    */
    cout<<dem(n)<<endl;
}