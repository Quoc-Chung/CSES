#include<bits/stdc++.h>
using namespace std;
int main (){
    int test;
    cin >> test;
    while (test--)
    {
        long long hang,cot;
        cin >> hang >> cot;
        if (hang< cot)
        {
            if (cot % 2 != 0)
            {
                long long kq=(cot*cot) - hang + 1;
                cout << kq << endl;
            }
            else if(cot % 2 == 0)
            {
                long long  kq=((cot-1)*(cot-1)) + hang - 1 ;
                cout << kq << endl;
            }
        }
        else
        {
            if (hang % 2 == 0)
            {
                long long kq=(hang*hang)-cot+1;
                cout <<kq << endl;
            }
            else if(hang % 2 != 0 )
            {
                long long kq = ((hang - 1) * (hang - 1) + 1 )+ cot-1;
                cout <<kq<< endl;
            }
        }
    }
    return 0;
}