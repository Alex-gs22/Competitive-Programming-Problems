#include <iostream>
using namespace std;
int main9() {
    ios_base::sync_with_stdio(false);
    cin.tie(0);

    int bola = 1;
    string N = "";
    cin >> N;
    for (char i : N) {
        if (i == 'A'){
            if(bola == 1){
                bola++;
            }else if(bola == 2){
                bola--;
            }
        }else if(i == 'B'){
            if(bola == 2){
                bola++;
            }else if(bola == 3){
                bola--;
            }
        }else
        if(bola == 1){
            bola = bola + 2;
        }else if (bola == 3){
            bola = bola - 2; }
    }
    cout << bola << endl;
    return 0;
}