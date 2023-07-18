#include<bits/stdc++.h>
using namespace std;

#define MAX 100

int main() {
    string s1, s2;
    getline(cin, s1);
    getline(cin, s2);
    int dem = 0;
    if (s1.empty() || s2.empty()) {
        cout << dem << endl;
    } else {
        int len1 = s1.length(), len2 = s2.length();
        char kq[MAX][MAX];
        int n = 0;
        for (int left = 0; left <= len1 - len2; left++) {
            string tam = s1.substr(left, len2);
            strcpy(kq[n++], tam.c_str());
        }
        for (int i = 0; i < n; i++) {
            if (strcasecmp(kq[i], s2.c_str()) == 0) {
                dem++;
            }
        }
        cout << dem << endl;
    }
    return 0;
}
