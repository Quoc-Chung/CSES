#include<bits/stdc++.h>
using namespace std;
/*
8 1 2
-1 3 -2 5 3 -5 2 2   --> 8  
*/
int main (){
    /*-- Sử dụng prefix sum-- */
    int n, maxx,minn;
    cin >> n >> maxx >> minn;
    long long a[n+1];
    long long f[n+1]={0};
   /* --memset(f,0,sizeof(f)); --*/
   /*--Cộng dồn mảng a vao thành mảng f--*/
    for (int i=1;i<=n;i++){
        cin >> a[i];
        f[i] = f[i-1] + a[i];
    }
    long long result = -1e9;
    
    cout << result << endl;
    return 0;
}