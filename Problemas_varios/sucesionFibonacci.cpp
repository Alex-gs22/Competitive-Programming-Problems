#include <iostream>
using namespace std;
int main4() {
    ios_base::sync_with_stdio(false);
    cin.tie(0);
    //Sucesion de Fibonacci
    // 0 1 / 1 2 3 5 8 13 21 34 55 89 144 233 377 ...
    //       1 2 3 4 5 6  7  8  9  10 11  12  13
    long N = 0;
    cin >> N;
    long ant = 0, sig = 1, nuevo = 0;

    for (int i = 1; i <= N; i++) {
        nuevo = ant + sig;
        ant = sig;
        sig = nuevo;
    }
    cout << nuevo << endl;
    return 0;
    //No crei que fuera asi de facil
}