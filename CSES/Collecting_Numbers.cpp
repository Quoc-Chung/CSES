#include<bits/stdc++.h>
using namespace std;
int main (){
    int n;
    cin >>n;
    vector <int> vt(n);
    vector<int>location(n);
    for(int i=0;i<n;i++){
        cin>>vt[i];
       location[vt[i]-1]=i;
    }
    int dem=1;
    for(int i=1;i<n;i++){
        // so o hien tai nho hon so o truoc no
       if(location[i]<location[i-1]){
        dem++;
       }
    } 
    cout<<dem<<endl;
}