#include<bits/stdc++.h>
using namespace std;
int main (){
    int n;
    long long mode;
    cin >>n>>mode;
    int a[n];
    int dem=0;
    for(int &x:a){
        cin >>x;
     }
    long long tong=0;
    int right,left=0;
    // dem cac chuoi con tu nho den lon
    //dem cac cap doi nhau
    int cuoi=n-1;
    for(int right=0;right<n;right++){
        tong+=a[right];
        // cofng for nay dam bao tong luon nho hon mode
        while(tong>mode){
            tong-=a[left];
            left++;
        }
        if(tong==mode){
            dem++;
        }
        
    }
   cout<<dem<<endl;
}