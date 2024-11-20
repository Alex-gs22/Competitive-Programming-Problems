#include <iostream>
using namespace std;

int main14() {
    ios_base::sync_with_stdio(0);
    cin.tie(0);

    string str = "",strMedio = "";
    cin >> str;
    strMedio = str+str+str+str+str;
    str = str+"   "+str;
    for(int i = 0; i < 8; i++){
        cout << str << endl;
        if(i == 3) cout << strMedio << endl;
    }
    return 0;
}
