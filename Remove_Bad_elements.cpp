#include <bits/stdc++.h>
using namespace std;
int main() {
    ios::sync_with_stdio(false);
    cin.tie(nullptr);
    int T;
    cin >> T;
    while (T--) {
        int N;
        cin >> N;
        vector<int> frequency(N + 1, 0);
        int maxFrequency = 0;
        for (int i = 0; i < N; ++i) {
            int value;
            cin >> value;
            maxFrequency = max(maxFrequency, ++frequency[value]);
        }
        cout << N - maxFrequency << '\n';
    }
 
}