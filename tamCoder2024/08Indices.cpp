/*#include <iostream>
#define fastIO ios_base::sync_with_stdio(0); cin.tie(0); cout.tie(0)
using namespace std;
int main() {
    fastIO;
    int n; cin>>n;
    int act[n];
    int des[n];
    for(int i=0; i<n; i++) cin>>act[i];
    for(int i=0; i<n; i++) cin>>des[i];
    bool flag = true;
    int cont = 0;
    for(int i=0; i<n; i++) {
            if(act[i] == des[i]) {i++;}
            if (act[i]>des[i]) {flag = true;}
            if (act[i]<des[i]) {flag = false;}
        int aux = i;
            for (int j=i+1; j<aux; j++) {
                if(flag && act[j]>des[j]) {
                    aux++;
                    cont++;
                }else if(!flag && act[j]<des[j]) {
                    aux++;
                    cont++;
                }
            }
    }
    cout<<cont;
    return 0;
}*/
#include <iostream>
#include <cmath>
using namespace std;

int main() {
    int n;
    cin >> n;
    int actual[1005], deseado[1005], diferencia[1005];
    for (int i = 0; i < n; i++) cin >> actual[i];
    for (int i = 0; i < n; i++) cin >> deseado[i];
    for (int i = 0; i < n; i++) diferencia[i] = deseado[i] - actual[i];
    int total = 0;
    int i = 0;
    while (i < n) {
        if (diferencia[i] == 0) {
            i++;
            continue;
        }
        int signo = (diferencia[i] > 0) ? 1 : -1;
        int j = i;
        while (j < n && (diferencia[j] * signo) > 0) {
            j++;
        }
        int min_valor = abs(diferencia[i]);
        for (int k = i + 1; k < j; k++) {
            if (abs(diferencia[k]) < min_valor) {
                min_valor = abs(diferencia[k]);
            }
        }
        total += min_valor;
        for (int k = i; k < j; k++) {
            diferencia[k] -= signo * min_valor;
        }
    }
    cout << total << endl;
    return 0;
}

