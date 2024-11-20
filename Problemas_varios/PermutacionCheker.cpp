#include <iostream>
using namespace std;

int main13() {
    ios_base::sync_with_stdio(false);
    cin.tie(0);

    int N = 0 , i = 0;
    string result = "YES";
    cin >> N;
    int numbers[N];
    cin >> numbers[0];
    for( i = 1; i < N; i++) {
        cin >> numbers[i];
        if((numbers[i-1]+1) != numbers[i]){
            result = "NO";
            break;
        }
    }
    cout << result << endl;
    return 0;
}
