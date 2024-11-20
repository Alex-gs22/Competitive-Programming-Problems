#include <iostream>
#include <vector>
#include <algorithm>
using namespace std;

int main15() {
    ios_base::sync_with_stdio(0);
    cin.tie(0);
    int N = 0, first = 0, second = 0;
    cin >> N;
    vector<pair<int,int>> novios;
    for(int i = 0; i < N; i++) {
        cin >> first >> second;
        novios.push_back(make_pair(first, second));
    }
    sort(novios.begin(), novios.end());
    for (auto const& p : novios) {
        cout << p.first << " "<< p.second <<endl;
    }
    return 0;
}
