#include<bits/stdc++.h>
using namespace std;
int main (){
   string s;
   cin >>s;
   int test;
   cin >>test;
   for(int i=0;i<test;i++){
    string t;
    cin >>t;
    vector<int> vi_tri;
      int pos = s.find(t);
      while (pos != -1) {
         vi_tri.push_back(pos);
         pos = s.find(t,pos+1);
      }
      if (vi_tri.empty()) {
         cout << "NO" << endl;
      } else {
         cout << "YES" << endl;
      }

   }
   }