#include<bits/stdc++.h>
using namespace std;
int  main(){
    int n;
    cin >>n;
    long long a[n];
    set<long long> se;
    for (int i=0;i<n;i++){
      cin>>a[i];
    }
     long long i=0 , j=0;
     long long  result=1;
    while (i<n && j<n){
        /*--Tức là a[i] chưa xuất hiện trong set--*/
        while (i<n && !se.count(a[i])){
          se.insert(a[i]);
          long long tam=se.size();
          result=max(result,tam);
          i++;
        }
        /*--Xóa a[j] đến khi nào a[i] mới không xuất hiện ở trong set nữa thì dừng lại--*/
        while (i<n && se.count(a[i])){
            se.erase(a[j]);
            j++;
        }
    }
    cout<<result<<endl;
}