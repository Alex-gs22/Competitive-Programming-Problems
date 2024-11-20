#include <iostream>
#include <vector>
using namespace std;
typedef long long ll;

int main() {
    int n;
    ll s;
    cin >> n >> s;
    vector<ll> a(n);
    for (int i = 0; i < n; i++) cin >> a[i];
    vector<ll> sum(n + 1, 0);
    for (int i = 0; i < n; i++) sum[i + 1] = sum[i] + a[i];
    vector<int> max_len(n);
    int r = 0;
    for (int i = 0; i < n; i++) {
        if (r < i) r = i;
        while (r < n && sum[r + 1] - sum[i] <= s) r++;
        max_len[i] = r - i;
    }
    vector<int> res(n);
    for (int i = 0; i < n; i++) {
        int left = 1, right = min(max_len[i], (n - i) / 2);
        int ans = 0;
        while (left <= right) {
            int k = (left + right) / 2;
            if (max_len[i] >= k && max_len[i + k] >= k) {
                ans = k * 2;
                left = k + 1;
            } else {
                right = k - 1;
            }
        }
        res[i] = ans;
    }
    for (int i = 0; i < n; i++) {
        cout << res[i] << '\n';
    }
    return 0;
}

/*#include <iostream>
#include <vector>
#define fastIO ios_base::sync_with_stdio(0); cin.tie(0); cout.tie(0)
using namespace std;
int main() {
    fastIO;
    long long N, S;
    cin >> N >> S;
    vector<long long> A(N);
    for (int i = 0; i < N; i++) {
        cin >> A[i];
    }
    vector<int> result(N, 0);
    for (int i = 0; i < N; i++) {
        int max_len = 0;
        for (int K = 1; i + 2 * K - 1 < N; K++) {
            long long sum_first_half = 0, sum_second_half = 0;
            for (int j = 0; j < K; j++) {
                sum_first_half += A[i + j];
            }
            for (int j = 0; j < K; j++) {
                sum_second_half += A[i + K + j];
            }
            if (sum_first_half <= S && sum_second_half <= S) {
                max_len = 2 * K;
            } else {
                break;
            }
        }
        result[i] = max_len;
    }
    for (int i = 0; i < N; i++) {
        cout << result[i] << '\n';
    }
    return 0;
}*/