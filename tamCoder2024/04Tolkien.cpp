#include <iostream>
#include <string>
#include <cstring>
#define fastIO ios_base::sync_with_stdio(0); cin.tie(0); cout.tie(0)
using namespace std;
const string VOCALS = "AEIOU";
long long dp[101][3][3][2];
string s;
int N;
long long dfs(int i, int c_vocal, int c_consonante, int has_L) {

    if (c_vocal >= 3 || c_consonante >= 3)
        return 0;
    if (i == N)
        return has_L;
    if (dp[i][c_vocal][c_consonante][has_L] != -1)
        return dp[i][c_vocal][c_consonante][has_L];
    long long res = 0;
    char c = s[i];
    if (c != '_') {
        int isVowel = (VOCALS.find(c) != string::npos) ? 1 : 0;
        int isL = (c == 'L') ? 1 : 0;
        if (isVowel) {
            res = dfs(i + 1, c_vocal + 1, 0, has_L | isL);
        } else {
            res = dfs(i + 1, 0, c_consonante + 1, has_L | isL);
        }
    } else {
        if (c_vocal + 1 < 3)
            res += 5 * dfs(i + 1, c_vocal + 1, 0, has_L);
        if (c_consonante + 1 < 3)
            res += dfs(i + 1, 0, c_consonante + 1, 1);
        if (c_consonante + 1 < 3)
            res += 20 * dfs(i + 1, 0, c_consonante + 1, has_L);
    }
    dp[i][c_vocal][c_consonante][has_L] = res;
    return res;
}

int main131332() {
    fastIO;

    memset(dp, -1, sizeof(dp));
    cin >> s;
    N = s.size();
    long long result = dfs(0, 0, 0, 0);
    cout << result << endl;
    return 0;
}
