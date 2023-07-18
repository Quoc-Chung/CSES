#include<bits/stdc++.h>
#define MAX 100
using namespace std;
int coins[MAX];
int n;
bool dp[1000000];
void backtrack(int i, int sum) {
    if (i == n) {
        dp[sum] = true;
        return;
    }
    backtrack(i+1,sum);
    backtrack(i+1,sum + coins[i]);
}
int main() {
    cin >> n;
    for (int i = 0; i < n; i++) {
        cin >> coins[i];
    }
    backtrack(0, 0);
    int ans = 1;
    while (dp[ans]) {
        ans++;
    }
    cout << ans << endl;
    return 0;
}
