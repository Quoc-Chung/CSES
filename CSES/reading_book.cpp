#include <bits/stdc++.h>
using namespace std;
int main() {
    int n;
    cin >> n;
    vector<long long> books(n);
    for (int i = 0; i < n; i++) {
        cin >> books[i];
    }
    if(n==1){
      cout<<books[0]*2<<endl;
    }
    else{
    //sắp xếp giảm dần 
    sort(books.begin(), books.end(), greater<int>());
    queue<long long> t1, t2;
    // đặt thời gian tương ứng với hai người 
    long long time1=0,time2=0;
    for (int i =0; i < n; i++) {
        if (time1 <= time2) {
            // thêm vào hàng đợi 1 số 8
            t1.push(books[i]);
            time1 += books[i]; // thời gian của người thứ nhất đọc là  8 
        }else {
            t2.push(books[i]);
            time2 += books[i];
        }
    }
    long long totalTime = max(time1, time2);
    while (!t1.empty() && !t2.empty()) {
        totalTime +=max(t1.front(), t2.front());
        t1.pop();
        t2.pop();
    }
    cout << totalTime << endl;
    }
    return 0;
}
