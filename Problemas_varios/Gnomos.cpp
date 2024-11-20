#include <iostream>
using namespace std;

int main12() {
    ios_base::sync_with_stdio(false);
    cin.tie(0);

    int N = 0, tamaño = 0, gnomo = 0,posicion = 1;
    cin >> N;
    int gnomosReyes[N];
    for (int i = 0; i < N; i++) {
        cin >> tamaño;
        int gnomos[tamaño];
        for (int j = 0; j < tamaño; j++) {
            cin >> gnomo;
            gnomos[j] = gnomo;
        }
        for (int j = 0; j < tamaño; j++) {
            posicion++;
            if (gnomos[j + 1] != (gnomos[j] + 1)) {
                gnomosReyes[i] = posicion;
                break;
            }
        }
        posicion = 1;
    }
    for (int i = 0; i < N; i++) {
        cout << gnomosReyes[i] << endl;
    }
    return 0;
}
