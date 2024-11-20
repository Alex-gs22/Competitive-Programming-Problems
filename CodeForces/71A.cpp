#include <iostream>
#define fastIO ios_base::sync_with_stdio(0); cin.tie(0); cout.tie(0)
using namespace std;
int mainsdsfcs() {
    fastIO;
    int n;
    cin>>n;
    string p;
    for(int i = 0; i < n; i++) {
        cin>>p;
        if(p.length() <= 10) {
            cout<<p<< endl;
        } else {
            string palabraAcortada = string(1, p[0]) + to_string(p.length() - 2) + p[p.length() - 1];
            cout<<palabraAcortada<< endl;
        }
    }
    return 0;
}