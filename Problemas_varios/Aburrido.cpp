#include <iostream>
using namespace std;
int main6() {
    ios_base::sync_with_stdio(false);
    cin.tie(0);

    int N = 0, aux = 1, total = 2;
    cin >> N;
    while (N--) {
        total += aux;
        aux += 2;
    }
    cout << total << endl;
    return 0;
}