#include<bits/stdc++.h>
using namespace std;
#define MAX 100
int main (){
  string s1,s2;
  //fflush(stdin);
  getline(cin,s1);
 // fflush(stdin);
  getline(cin,s2);
 int dem=0;
 if(s1.empty()==1 && s2.empty()==1){
    cout<<dem<<endl;
    }
 else{
  int len1=s1.length(),len2 = s2.length();
  char kq[MAX][MAX];
  int n=0;
  int left=0;
  while(left+len2<=len1){
      string tam="";
    for(int i=left;i<left+len2;i++){
      tam+=s1[i];
    }
    strcpy(kq[n++],tam.c_str());
    left++;
  }
  
  for(int i=0;i<n;i++){
    if(strcmp(kq[i],s2.c_str())==0){
        dem++;
    }
  }
  cout<<dem<<endl;
 }
 return 0;
}
