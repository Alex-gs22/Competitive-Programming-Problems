#include <iostream>
#define fastIO ios_base::sync_with_stdio(0); cin.tie(0); cout.tie(0)
using namespace std;
int mainfxxfdv() {
    fastIO;
    int n, x = 0;
    cin>>n;
    string bit;
    for( int  i = 0; i < n; i++) {
        cin>>bit;
        if (bit == "X++" || bit == "++X"){x++;}else if(bit == "--X" || bit == "X--"){x--;}
    }
    cout<<x;
    return 0;
}