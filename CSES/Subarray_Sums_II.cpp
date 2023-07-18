#include<bits/stdc++.h>
using namespace std;
/*--in ra số lượng mảng con có tổng là 7--*/
int main (){
    int n;
    long long  k;
    cin >> n >> k;
    long long result = 0;
    long long a[n+1];
    long long tong =0;
    map<long long ,long long > mp;
    for (int i=1;i<=n;i++){
      cin >>a[i];
      tong+=a[i];
      if(tong==k){
        result++;
      }
      // kiểm tra  được các số a[i] có giá trị bằng  k
      result+=mp[tong-k];
      mp[tong]++;
    }
      /*
      ---- Độ phức tạp của thuật toán là  O(n^2)
    for(int i=1;i<=n;i++){
        for(int j=i;j<=n;j++){
            long long tam=f[j]-f[i-1];
            if(tam==k){
                result++;
            }
        }                     
    }
    */
   /*
long long sum = 0;//sum được sử dụng để tính tổng các phần tử của dãy số f[].
map<int, int> frequency;// Sử dụng map để lưu trữ tần suất của các giá trị sum
for (int j = 1; j <= n; j++) {// duyệt  qua từng phần tử trong dãy prefix sum
    sum += f[j];// tổng += phần tử  trong  dãy prefix sum 
    if (sum == k) {// nếu tổng  này bằng giá trị k cho trước    
        result++;
    }

// câu lệnh này dùng để kiểm tra trong frefix có số nào  có giá trị là k không  
    if (frequency.find(sum - k) != frequency.end()) {// kiểm tra  sum -k xuất hiện trong map không 
        result += frequency[sum - k];
    }
    frequency[sum]++;// thêm sum vào map câp nhật giá trị của tần  xuất của  biến sum 
}
*/
 cout<<result <<endl;
}
