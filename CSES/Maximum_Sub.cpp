#include<bits/stdc++.h>
using namespace std;
/*
8 1 2
-1 3 -2 5 3 -5 2 2  
*/
int main (){
    /*-- Sử dụng prefix sum-- */
    long long n, left, right;
    cin >> n >> left >> right;
    long long a[n+1];
    long long f[n+1]={0};
   /* --memset(f,0,sizeof(f)); --*/
   /*--Cộng dồn mảng a vao thành mảng f--*/
    for (int i=1;i<=n;i++){
        cin >> a[i];
        f[i] = f[i-1] + a[i];
    }
     /* --Tạo biến lưu tổng chuỗi con từ vị trí left đến vị trí right dài nhất --*/
    long long result = -1e9;
        int i=left;
        while (i<=right){
            /*--Sau moi vong lap thi se thu hep chuoi con lai--*/
        for (int j = 0; j <= n-i; j++){
            /*Tong doan tu j+1 den j+i */
            long long res = f[j+i]-f[j];
            result = max(result, res);
        }
        i++;
    }
    cout << result << endl;
    return 0;
}
