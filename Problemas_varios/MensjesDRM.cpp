#include <iostream>
using namespace std;
int main8() {
    ios_base::sync_with_stdio(false);
    cin.tie(0);

    int valueAbc = 65, total = 0, k = 0;
    char letra = ' ';
    string DMR;
    cin >> DMR;
    //Dividir
    int mid = DMR.size() / 2;
    string mitad1 = DMR.substr(0, mid);
    string mitad2 = DMR.substr(mid, DMR.size());
    cout << mitad1 << endl;
    cout << mitad2 << endl;
    cout << endl;
    //Rotar
    for (char i : mitad1) {
        letra = i;
        total += (letra - valueAbc);
    }
    for (char i : mitad1) {
        for(int j = 0; j < total; j++){
            i = (i == 'Z') ? 'A' : i + 1;
            mitad1[k] = i;
        }
        k++;
    }
    total = 0;
    for (char i : mitad2) {
        letra = i;
        total += (letra - valueAbc);
    }
    k = 0;
    for (char i : mitad2) {
        for(int j = 0; j < total; j++){
            i = (i == 'Z') ? 'A' : i + 1;
            mitad2[k] = i;
        }
        k++;
    }
    //Unir
    total = 0;
    k = 0;
    cout << mitad1 << endl;
    cout << mitad2 << endl;
    cout << endl;
    for (char& i : mitad1) {
        total = mitad2[k] - valueAbc;
        for(int j = 0; j < total; j++){
            i = (i == 'Z') ? 'A' : i + 1;
        }
        k++;
    }
    cout << mitad1 << endl;
    return 0;
}