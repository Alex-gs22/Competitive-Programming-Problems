#include <iostream>
#include <queue>
using namespace std;

int maincafe() {
    ios_base::sync_with_stdio(0);
    cin.tie(0);

    queue<string> trabajadores, alumnos;
    string entrada, nombre;
    int N = 0;

    cin >> N;
    cin.ignore();

    while (N--) {
        getline(cin, entrada);
        if (entrada.substr(0, 16) == "LLEGA TRABAJADOR") {
            trabajadores.push(entrada.substr(16));
        } else if (entrada.substr(0, 12) == "LLEGA ALUMNO") {
            alumnos.push(entrada.substr(12));
        } else if (entrada.substr(0, 7) == "ATIENDE") {
            if (trabajadores.empty()) {
                cout << alumnos.front() << endl;
                alumnos.pop();
            } else {
                cout << trabajadores.front() << endl;
                trabajadores.pop();
            }
        }
    }
    return 0;
}

