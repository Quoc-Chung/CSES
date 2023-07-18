#include<bits/stdc++.h>
using namespace std;
int dem[1000006]={0};
int main (){
    int  n;
    cin >>n;
    for(int i=1;i<=n;i++){
        dem[i]++;// tức là đánh dấu các số đã xuất hiện 1 lần 
    }
    int a[n-1];
    for(int i=1;i<n;i++){
        cin>>a[i];
        dem[a[i]]++;
    }
    for(int i=0;i<1000006;i++){
         if(dem[i]==1){
            cout<<i<<endl;
            break;
         }
    }
}