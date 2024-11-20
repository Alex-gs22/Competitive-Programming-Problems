#include <iostream>
#define fastIO ios_base::sync_with_stdio(0); cin.tie(0); cout.tie(0)
using namespace std;
int mainydfgj() {
    fastIO;
    int n, k, x = 0 , val, cont = 0;
    cin>>n>>k;
    int a[n];
    for(int i = 0; i < n; i++) {
        cin>>val;
        if(i == k-1) {
            x = val;
            a[i] = val;
        }else {
            if(x>0 && val>=x) {
                cont++;
            }
            a[i] = val;
        }
    }
    for(int i = 0; i < k; i++) {
        if(a[i]>=x && a[i]!=0){cont++;}
    }
    cout<<cont;
    return 0;
}