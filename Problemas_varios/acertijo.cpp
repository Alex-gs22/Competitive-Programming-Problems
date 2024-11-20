#include <iostream>
using namespace std;

int main19() {
    ios_base::sync_with_stdio(0);
    cin.tie(0);

    int N = 0, first = 0, second = 0;
    cin >> N;
    for(int i = 0; i < N; i++){
        cin >> first >> second;
        cout << first-second << first+second << endl;
    }

    return 0;
}
