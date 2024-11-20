#include <iostream>
#include <string>
#include <cstring>
#include <vector>
#include <algorithm>
#define fastIO ios_base::sync_with_stdio(0); cin.tie(0); cout.tie(0)
using namespace std;

bool cmp(const string &a, const string &b) {
    if (a.size() != b.size())
        return a.size() < b.size();
    else
        return a < b;
}

int main2354zcd() {
    fastIO;
    int n;
    cin >> n;
    cin.ignore();
    vector<string> v;
    while (n--) {
        string s;
        getline(cin, s);
        string t;
        for (char c : s) {
            if (isdigit(c)) {
                t += c;
            } else {
                if (!t.empty()) {
                    size_t idx = 0;
                    while (idx < t.size() && t[idx] == '0')
                        idx++;
                    string num = t.substr(idx);
                    if (num.empty())
                        num = "0";
                    v.push_back(num);
                    t.clear();
                }
            }
        }
        if (!t.empty()) {
            size_t idx = 0;
            while (idx < t.size() && t[idx] == '0')
                idx++;
            string num = t.substr(idx);
            if (num.empty())
                num = "0";
            v.push_back(num);
        }
    }
    sort(v.begin(), v.end(), cmp);
    for (const string &s : v) {
        cout << s << '\n';
    }
    return 0;
}
