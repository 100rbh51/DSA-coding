#include <iostream>
#include <vector>
using namespace std;
int main() {
    ios::sync_with_stdio(false);
    cin.tie(nullptr);
    int T;
    cin >> T;
    while (T--) {
        int N;
        cin >> N;
        vector<long long> fingers(N), sheaths(N);
        for (auto& length : fingers) cin >> length;
        for (auto& length : sheaths) cin >> length;
        bool front = true, back = true;
        for (int i = 0; i < N; ++i) {
            if (fingers[i] > sheaths[i]) front = false;
            if (fingers[i] > sheaths[N - 1 - i]) back = false;
        }
        if (front && back) cout << "both\n";
        else if (front) cout << "front\n";
        else if (back) cout << "back\n";
        else cout << "none\n";
    }

    return 0;
}