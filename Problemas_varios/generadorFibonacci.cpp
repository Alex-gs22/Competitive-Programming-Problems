#include <iostream>
using namespace std;

int main18() {
    ios_base::sync_with_stdio(0);
    cin.tie(0);
    int N = 0,ant = 1,sig = 1;
    cin >> N;
    int arr[N];
    arr[0] = ant;
    arr[1] = sig;
    for(int i = 2;i < N;i++){
        arr[i] = ant + sig;
        ant = sig;
        sig = arr[i];
    }
    for(int i = 0;i < N;i++){
        cout << arr[i] << " ";
    }
    return 0;
}
