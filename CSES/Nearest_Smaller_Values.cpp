#include<bits/stdc++.h>
using namespace std;
stack<long long >st;
int main (){
    int n;
    cin >>n;
    long long a[n+1];
    for(int i=1;i<=n;i++){
        cin>>a[i];
    }
    for(int i=1;i<=n;i++){
        /*--Dieu kien so khong thoa man-*/
        while (!st.empty() && a[i]<=a[st.top()]){
            st.pop();
        }
        /*stack rong tuc la khong co so nao thoa man-*/
        if(st.empty()){
            cout<<0<<" ";
        }
        /*-Co so thoa man thi so gan nhat chac chan la so vua duoc dua vao*/
        else{
            cout<<st.top()<<" ";
        }
        /*-Them chi so vao de xet tiep-*/
        st.push(i);
    }

}