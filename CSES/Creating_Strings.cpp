#include<bits/stdc++.h>
using namespace std;
int len;
int check[11] = {0};
char a[11], str[9];
int dem =0; 
void xuat() {
  dem ++;
    for (int i = 0; i < len; i++) {
        printf("%c ", a[i]);
    }
    cout <<endl;
}
void Try(int i) {
    for (int j = 0; j < len; j++) {
        if (check[str[j]] == 0) {
            check[str[j]] = 1; // mark as used
            a[i] = str[j];
            if (i == len - 1)
                xuat();
            else
                Try(i + 1);
            check[str[j]] = 0;
        }
    }
}
int main() {
    string s;
    cin >> s;
    len = s.length();
    int h = 0;
    for (int i = 0; i < s.length(); i++) {
        str[h++] = s[i];
    }
    Try(0);
    cout<<dem<<endl;
    return 0;
}
