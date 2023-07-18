#include<bits/stdc++.h>
using namespace std;
long long  n;
long long a[100];
void Nhap_n(long long &n){
    cin >>n;
}
void Printf(int a[],int n){
    for (int i=1;i<=n;i++){
        cout<<a[i];
    }
    cout<<" ";
}
long long Create_binary(int x){
   long long dem=0;
   for(int j=0;j<=1;j++){
      a[x]=j;
      if(x==n){
      //   Printf(a,n);
         /*--Dem so luong cac so nhi phan co do dai n trong moi lan goi de quy */
         dem++;
      }
      else {
        /*--Tinh tong so luong cac so--*/
        dem+= Create_binary(x+1);
      }
   }   
   return dem;
}
int main (){
   Nhap_n(n);
   int result=1;
   for(int i=0;i<n;i++){
   result=(result*2)%(1000000007);
   }
   cout<<result<<endl;
}