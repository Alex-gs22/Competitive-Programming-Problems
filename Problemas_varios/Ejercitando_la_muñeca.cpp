#include <iostream>
using namespace std;
int main5() {
    ios_base::sync_with_stdio(false);
    cin.tie(0);

    int N = 0, cachetadas = 0;
    cin >> N;
    while(N!=0){
        cachetadas = cachetadas + (N+N);
        N--;
    }
    cout << cachetadas << endl;
    return 0;
}