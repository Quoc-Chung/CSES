#include<bits/stdc++.h>
using namespace std;
int main (){
int n;
cin >>n;
long long a[n];
for (long long &x:a){
    cin >>x;
}
set<long long >se;
for(long long x:a){
    se.insert(x);
}
cout<<se.size()<<endl;
}