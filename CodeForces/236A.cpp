#include <iostream>
#include <unordered_set>
#define fastIO ios_base::sync_with_stdio(0); cin.tie(0); cout.tie(0)
using namespace std;
int mainrvsrv() {
    fastIO;
    string s;
    getline(cin,s);
    unordered_set<char> letras;
    for(char i : s) {
        letras.insert(i);
    }
    if(letras.size()%2==0) {
        cout<<"CHAT WITH HER!";
    }else {
        cout<<"IGNORE HIM!";
    }
    return 0;
}