#include <iostream>
using namespace std;
int main7() {
    ios_base::sync_with_stdio(false);
    cin.tie(0);
    int N = 0;
    string hoja = "*", base = "###";
    cin >> N;
    int aux = N;
    while (aux--) {
        hoja.insert(0, " ");
        base.insert(0, " ");
    }
    hoja.erase(0, 1);
    while (N--) {
        cout<<hoja<<endl;
        hoja += "**";
        hoja.erase(0, 1);
    }
    base.erase(0, 2);
    cout << base << endl;
    cout << base << endl;
    return 0;
}