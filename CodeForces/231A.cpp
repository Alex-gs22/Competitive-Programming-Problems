#include <iostream>
#define fastIO ios_base::sync_with_stdio(0); cin.tie(0); cout.tie(0)
using namespace std;
int mainawefdc() {
    fastIO;
    int n, cont = 0;
    cin>>n;
    for(int i = 0; i <n; i++) {
        int a, b, c;
        cin >> a >> b >> c;
        if (a+b+c>=2) {
            cont++;
        }
    }
    cout<<cont;
    return 0;
}