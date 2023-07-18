#include<bits/stdc++.h>
using namespace std;
int main() {
    int n;
    cin >> n;
    queue<string> q;
    q.push("0");
    q.push("1");
    int dem = 0;
    int i = 1;
    while (i <= n) {
        int size = q.size();
        for (int j = 0; j < size; j++) {
            string s = q.front();
            q.pop();
            if (s.length() == n) {
                dem++;
            }
            q.push(s + "0");
            q.push(s + "1");
        }
        i++;
    }
    cout << dem << endl;
    return 0;
}
