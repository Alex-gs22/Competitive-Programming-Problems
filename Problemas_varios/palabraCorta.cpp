#include <iostream>
#include <vector>
using namespace std;

int main10() {
    ios_base::sync_with_stdio(false);
    cin.tie(0);

    int i = 0, posMenor = 0, numActual = 0;
    string N;
    vector<string> palabras;
    getline(cin, N);
    bool primeraLineaEsNumero = true;
    for (char c : N) {
        if (!isdigit(c)) {
            primeraLineaEsNumero = false;
            break;
        }
    }
    if (!primeraLineaEsNumero) {
        palabras.push_back(N);
        i = 1;
    }
    while (getline(cin, N)) {
        if (N.empty()) {
            break;
        }
        palabras.push_back(N);
    }
    for ( i = 0 ; i < palabras.size(); i++) {
        numActual = 0;
        for (char j : palabras[i]) {
            numActual++;
        }
        if (numActual < palabras[posMenor].length()) {
            posMenor = i;
        }
    }
    cout << palabras[posMenor] << endl;
    cout << palabras[posMenor].length() << endl;
    if(palabras[posMenor].length() % 2 == 0)
        cout << "par" << endl;
    else
        cout << "impar" << endl;
    return 0;
}
