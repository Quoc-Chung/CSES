#include<bits/stdc++.h>
using namespace std;
int main (){
  int n;
  cin >>n;
  long  long a[n];
  for(long long &x:a) {
    cin >>x;
  }
  multiset<long long > ms;
  for(int i=0;i<n;i++){
    auto it = ms.upper_bound(a[i]);
  /*--Tuc la khong co phan tu nao trong set >=a[i] --*/
    if(it==ms.end()){
       ms.insert(a[i]);
    }
  /*--Co phan tu trong set >= a[i] tim kiem--*/
    else{
      /*--Xoa phan tu tim kiem khoi set--*/
       ms.erase(it);
       ms.insert(a[i]);
    }
  }
  cout<<ms.size()<<endl;
}

  