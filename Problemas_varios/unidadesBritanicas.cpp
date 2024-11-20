#include <iostream>
using namespace std;

int main17() {
    ios_base::sync_with_stdio(0);
    cin.tie(0);
    //    1         4       2       2      8
    int galones, cuartas, pintas, tazas, onzas;
    cin >> galones >> cuartas >> pintas >> tazas >> onzas;
    tazas += onzas/8;
    onzas %= 8;
    pintas += tazas/2;
    tazas %= 2;
    cuartas += pintas/2;
    pintas %= 2;
    galones += cuartas/4;
    cuartas %= 4;
    cout << galones << " " << cuartas << " " << pintas << " " << tazas << " " << onzas << endl;
    return 0;
}
