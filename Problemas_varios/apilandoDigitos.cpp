#include <iostream>
using namespace std;
int main16() {
    ios_base::sync_with_stdio(0);
    cin.tie(0);

    int N = 0,aux = 0;
    cin >> N;
    string str = "";
    for (int i = 0; i < N; i++) {
        for (int j = 0; j < i+1; j++) {
            aux = N-N+i+1;
            str = to_string(aux);
            cout << str;
        }
        cout << endl;
    }
    for(int i = 0; i < N; i++) {
        for (int j = 0; j < N-i-1; j++) {
            aux = N-i-1;
            str = to_string(aux);
            cout << str;
        }
        cout << endl;
    }
    return 0;
}
