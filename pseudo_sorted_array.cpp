#include <bits/stdc++.h>
using namespace std;

int main() {
    int t;
    cin >> t;

    while (t--) {
        int n;
        cin >> n;

        vector<int> a(n);

        for (int i = 0; i < n; i++) {
            cin >> a[i];
        }

        int cnt = 0;
        int idx = -1;

        
        for (int i = 0; i < n - 1; i++) {
            if (a[i] > a[i + 1]) {
                cnt++;
                idx = i;
            }
        }

        if (cnt == 0) {
            cout << "YES\n";
        }
        else if (cnt == 1) {
            swap(a[idx], a[idx + 1]);

            if (is_sorted(a.begin(), a.end())) {
                cout << "YES\n";
            }
            else {
                cout << "NO\n";
            }
        }
        else {
            cout << "NO\n";
        }
    }

    return 0;
}
