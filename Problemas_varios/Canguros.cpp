#include <bits/stdc++.h>
#include <queue>
using namespace std;
int main2() {
    ios_base::sync_with_stdio(0);
    cin.tie(0);

    int C = 0, N = 0, Mi = 0;
    cin>>C;
    cin>>N;
    string aux = "";
    queue<int> canguros;
    while(N!=0){
        cin>>aux;
        if(aux == "N"){
            cin>>Mi;
            canguros.push(Mi+1);
            N--;
        }else if(aux == "A"){
            C = C - canguros.front();
            canguros.pop();
            N--;
        }else if(aux == "C"){
            cout<<canguros.size()<<endl;
            N--;
        }else{//R
            cout<<C<<endl;;
            N--;
        }
    }
}