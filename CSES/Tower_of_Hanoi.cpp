#include<bits/stdc++.h>
using namespace std;
vector<pair<int ,int > >vt;
void thap_ha_noi (int n,int cocA,int cocB,int cocC){
    if(n==1){
        vt.push_back({cocA,cocC});
    }
    else{
        thap_ha_noi(n-1,cocA,cocC,cocB);
        thap_ha_noi(1,cocA,cocB,cocC);
        thap_ha_noi(n-1,cocB,cocA,cocC);
    }
}
int main(){
    int n;
    cin >> n;
    int coc1=1,coc2=2,coc3=3;
    thap_ha_noi(n,coc1,coc2,coc3);
    cout<<vt.size()<<endl;
    for(auto x:vt){
        cout<<x.first<<" "<<x.second<<endl;
    }
}