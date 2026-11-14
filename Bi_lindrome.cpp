#include <bits/stdc++.h>
using namespace std;
int main() {
    ios::sync_with_stdio(false);
    cin.tie(nullptr);
    int T;
    cin >> T;
    while (T--) {
        int N;
        string S;
        cin >> N >> S;
        int shortestPalindromeLength = N + 1;
        for (int i = 0; i < N; ++i) {
            for (int j = i + 1; j < N; ++j) {
                if (S[i] == S[j]) {
                    shortestPalindromeLength = 2;
                    break;
                }
            }
            if (shortestPalindromeLength == 2) break;
        }
        if (shortestPalindromeLength != 2) {
            for (int i = 0; i < N; ++i) {
                for (int k = i + 2; k < N; ++k) {
                    if (S[i] == S[k]) {
                        shortestPalindromeLength = 3;
                        break;
                    }
                }
                if (shortestPalindromeLength == 3) break;
            }
        }

        if (shortestPalindromeLength == N + 1) {
            cout << -1 << '\n';
        } else {
            cout << N - shortestPalindromeLength << '\n';
        }
    }

    return 0;
}