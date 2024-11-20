#include <iostream>
#include <string>
#include <limits>
using namespace std;
int main3() {
    ios_base::sync_with_stdio(false);
    cin.tie(0);
    int N = 0;
    cin >> N;
    int ids[N];
    string nombres[N];
    double tiempos[N];
    double menor = 0;
    int indice_menor = 0, i = 0, j = 0;
    for (i = 0; i < N; i++) {
        cin >> ids[i];
        cin.ignore();
        getline(cin, nombres[i]);
        cin >> tiempos[i];
    }
    for (j = 0; j < 3; j++) {
        menor = tiempos[0];
        indice_menor = 0;

        for (i = 1; i < N; i++) {
            if (tiempos[i] < menor) {
                menor = tiempos[i];
                indice_menor = i;
            }
        }
        cout << ids[indice_menor] << " " << nombres[indice_menor] << " " << menor << endl;
        tiempos[indice_menor] = numeric_limits<double>::max();
    }
    return 0;
}