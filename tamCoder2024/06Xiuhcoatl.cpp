#include <iostream>
#include <vector>
#include <algorithm>
#include <cmath>

#define fastIO ios_base::sync_with_stdio(0); cin.tie(0); cout.tie(0)

using namespace std;

typedef long long ll;

struct Estudiante {
    ll tiempo_solicitado;
    ll tiempo_asignado;
    ll indice;
};

bool comparar_tiempos(const Estudiante &a, const Estudiante &b) {
    return a.tiempo_solicitado < b.tiempo_solicitado;
}

int main03901310() {
    fastIO;
    ll tiempo_total, num_estudiantes;
    cin >> tiempo_total >> num_estudiantes;

    vector<Estudiante> estudiantes(num_estudiantes);
    ll suma_tiempos = 0;
    for (ll i = 0; i < num_estudiantes; i++) {
        cin >> estudiantes[i].tiempo_solicitado;
        estudiantes[i].indice = i;
        suma_tiempos += estudiantes[i].tiempo_solicitado;
    }

    if (suma_tiempos == tiempo_total) {
        cout << 0 << endl;
        return 0;
    }

    sort(estudiantes.begin(), estudiantes.end(), comparar_tiempos);

    ll bajo = 0, alto = estudiantes[num_estudiantes - 1].tiempo_solicitado;
    ll limite = 0;
    ll tiempo_asignado_total = 0;

    while (bajo <= alto) {
        ll medio = (bajo + alto) / 2;
        ll asignado = 0;
        for (ll i = 0; i < num_estudiantes; i++) {
            ll tiempo_actual = max(0LL, min(estudiantes[i].tiempo_solicitado, estudiantes[i].tiempo_solicitado - medio));
            asignado += tiempo_actual;
        }
        if (asignado > tiempo_total) {
            bajo = medio + 1;
        } else {
            limite = medio;
            alto = medio - 1;
        }
    }

    tiempo_asignado_total = 0;
    for (ll i = 0; i < num_estudiantes; i++) {
        estudiantes[i].tiempo_asignado = max(0LL, min(estudiantes[i].tiempo_solicitado, estudiantes[i].tiempo_solicitado - limite));
        tiempo_asignado_total += estudiantes[i].tiempo_asignado;
    }

    ll tiempo_restante = tiempo_total - tiempo_asignado_total;
    sort(estudiantes.begin(), estudiantes.end(), [](const Estudiante &a, const Estudiante &b) {
        return (a.tiempo_solicitado - a.tiempo_asignado) > (b.tiempo_solicitado - b.tiempo_asignado);
    });

    for (ll i = 0; i < num_estudiantes && tiempo_restante > 0; i++) {
        if (estudiantes[i].tiempo_asignado < estudiantes[i].tiempo_solicitado) {
            estudiantes[i].tiempo_asignado++;
            tiempo_restante--;
        }
    }

    ll ira_total = 0;
    for (ll i = 0; i < num_estudiantes; i++) {
        ll diferencia = estudiantes[i].tiempo_solicitado - estudiantes[i].tiempo_asignado;
        ira_total += diferencia * diferencia;
    }

    cout << ira_total << endl;

    return 0;
}
