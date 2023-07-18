#include<bits/stdc++.h>
using namespace std;
/*
Hàm này dùng để tính các  đoạn có  trong  prefixSum 
----------Đoạn từ  i-->j là f[j] -f[i-1]--------
int calculateSubarraySum(int f[], int i, int j) {
    if (i == 0) {
        return f[j];
    } else {
        return f[j] - f[i- 1];
    }
}
*/
int main() {
    int n,k;
    cin >>n>>k;
    int a[n+1];
    for(int i=1;i<=n;i++){
      cin>>a[i];
    }
   int f[n+1];// Tạo một mảng tổng tích lũy (Prefix Sum)
    memset(f,0,sizeof(f));
    for (int i = 1; i<=n; i++) {
        f[i] = f[i - 1] + a[i];
    }
    for (int i = 1; i <=n - k+1;i++) {
        int start = i;
        int end = i + k-1;
        long long subarraySum=0;
        if(start ==0){
           subarraySum=f[end];
        }
        else{
            subarraySum=f[end]-f[start-1];
        }
        cout << "Tong cua doan [" << start << ", " << end << "] la: " << subarraySum << endl;
    }
    return 0;
}
