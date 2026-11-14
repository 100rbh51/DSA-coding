#include <bits/stdc++.h>
using namespace std;

int main() {
    ios::sync_with_stdio(false);
    cin.tie(nullptr);

    int T;
    cin >> T;

    while (T--) {
        int N, X, C;
        cin >> N >> X >> C;

        long long result = 0;

        for (int i = 0; i < N; ++i) {
            int coins;
            cin >> coins;
            result += max(coins, X - C);
        }

        cout << result << '\n';
    }

    return 0;
}