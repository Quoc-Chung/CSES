#include <bits/stdc++.h>
using namespace std;

int main() {
    int n, left, right;
    cin >> n >> left >> right;

    long long a[n + 1];
    for (int i = 1; i <= n; i++) {
        cin >> a[i];
    }

    long long f[n + 1] = {0};
    for (int i = 1; i <= n; i++) {
        f[i] = f[i - 1] + a[i];
    }

    long long result = -1e9;
    long long sum = 0;
    for (int i = 0; i <= right; i++) {
        if (i >= left) {
            result = max(result, sum);
        }
        if (i >= n) {
            break;
        }
        sum += a[i + 1];
        if (i >= left - 1) {
            sum -= a[i - left + 1];
        }
    }

    cout << result << endl;

    return 0;
}
