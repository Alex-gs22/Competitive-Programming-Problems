#include <iostream>
#define fastIO ios_base::sync_with_stdio(0); cin.tie(0); cout.tie(0)
using namespace std;
int mainscsf() {
    fastIO;
    int n, m,x;
    cin>>n>>m;
    x = n*m;
    if(x%2 == 0) {
        cout<<x/2;
    }else {
        cout<<(x-1)/2;
    }
    return 0;
}