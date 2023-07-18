#include<bits/stdc++.h>
using namespace std;
string s[100000];
int n;
int main (){
 cin >>n;
 //tính gray thu 1
 s[1]="0";
 s[2]="1";
 int k;
 //Tính số lượng gray
 if(n>1){
 int doixung =2;
 for(int i=2;i<=n;i++){  //2 3 4 5 6 7 8
    //tính số lượng gray thứ i
     k=pow(2,i);// k=
    for(int j=1;j<=doixung;j++){//  1 2 3 4  
        s[k-j+1]="1"+s[j];
        s[j]="0"+s[j];
    }
    doixung=k;
 }
 }
 for(int j=1;j<=k;j++){
    cout<<s[j]<<endl;
 }
}

