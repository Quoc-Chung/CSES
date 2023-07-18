#include<bits/stdc++.h>
using namespace std;
int n,a[17];
void Printf(){
for(int i=1;i<=n;i++){
  cout<<a[i];
   }
   cout<<endl;
}
void NhiPhan(int i){
   for(int j=0;j<=1;j++){
      a[i]=j;
      if(i==n){
         Printf();
      }
      else{
         NhiPhan(i+1);
      }
   }
}
int main(){
  cin >>n;
  NhiPhan(1);
  return 0;
}