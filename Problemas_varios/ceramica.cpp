#include <iostream>
using namespace std;

int mainPisosconCruz() {
    ios_base::sync_with_stdio(0);
    cin.tie(0);
    short N = 0;
    cin>>N;
    int blancas = (N*N), grises = 0;
    grises += (N*4)-4;
    grises += ((N-3)/2)*4+1;
    blancas -= grises;
    cout<<blancas<<" "<<grises<<"\n";
    return 0;
}
