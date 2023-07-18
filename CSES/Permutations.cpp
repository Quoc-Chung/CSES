#include<bits/stdc++.h>
using namespace std;
int cmp1(const void *a,const void *b){
    int *x=(int *)a;
    int *y=(int*)b;
    if(*x%2==0 && *y%2!=0){
         return -1;
    }
    return *y-*x;
}
//int cmp2
int main(){
    int n;
    cin >>n;
    int a[n+1]={0};
    for (int i=0;i<n;i++){
        a[i]=i+1;
    }
    if(n<5 && n!= 1 && n!=4){
        cout<<"NO SOLUTION"<<endl;
    }
    else if(n==4){
        cout<<"2 4 1 3"<<endl;
    }
    else{
       qsort(a,n,sizeof(int),cmp1);
      for (int i=0;i<n;i++){
        cout<<a[i]<<" ";
      }
    }
}