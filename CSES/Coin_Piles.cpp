#include<bits/stdc++.h>
using namespace std;
int main (){
    int n;
    cin >>n;
    while (n--){
        long long a,b;
        cin >>a>>b;
        // Tính số lần cần thiết để giảm a và b đến 0.
        int so_lan_a = (2 * a - b) / 3;

        int so_lan_b = (2 * b - a) / 3;
        
        // Kiểm tra xem có thể giảm a và b đến 0 không.
        if (( a==2 *so_lan_a +so_lan_b)
                && ( b ==2 * so_lan_b + so_lan_a )
                    &&  (so_lan_a >= 0 && so_lan_b >= 0)){
            cout <<"YES" <<endl;
        }
        else {
            cout <<"NO" <<endl;
        }
       /*
        while (a!=0 && b!=0){
            if(a>b){
                a-=2;
                b-=1;
            }
            else{
                a-=1;
                b-=2;
            }
        }
        if(a+b==0){
            cout<<"YES"<<endl;
        }
        else {
            cout<<"NO"<<endl;
        }
         */
      }
}