#include <iostream>
#define fastIO ios_base::sync_with_stdio(0); cin.tie(0); cout.tie(0)
using namespace std;
int mainpokc() {
    fastIO;
    string s1, s2;
    cin>>s1>>s2;
    for (char &c : s1) {c |= 32;}
    for (char &c : s2) {c |= 32;}
    if (s1 > s2) {
        cout << "1";
    } else if (s1 < s2) {
        cout << "-1";
    } else {
        cout << "0";
    }
    return 0;
}