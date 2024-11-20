#include <iostream>
#include <set>
#include <sstream>
#define fastIO ios_base::sync_with_stdio(0); cin.tie(0); cout.tie(0)
using namespace std;
int mainjnkkjnñlmm() {
    fastIO;
    string s;
    getline(cin, s);

    multiset<char> unique_numbers;
    for (char c : s) {
        if (isdigit(c)) {
            unique_numbers.insert(c);
        }
    }

    ostringstream result;
    for (auto it = unique_numbers.begin(); it != unique_numbers.end(); ++it) {
        if (it != unique_numbers.begin()) {
            result << "+";
        }
        result << *it;
    }

    cout << result.str() << endl;

    return 0;
}
