#include<bits/stdc++.h>
using namespace std;
int main (){
    int n;
    long long x;
    cin >>n>>x;
    long long a[n];
    for(int i=0;i<n;i++){
        cin >>a[i];
    }
    sort(a,a+n);
    int godolas=0;
    int left=0,right=n-1;
    while (left<=right){
        /*--Co the ghep hai cu em vào 1 chiếu godolas--*/
        if(a[left]+a[right]<=x){
            left++;
            right--;
            godolas++;
        }
        /*--Nếu không thi ta chi co the ghep cu em lon hon vao --*/
        else {
            right--;
            godolas++;
        }
    }
    cout<<godolas<<endl;
}