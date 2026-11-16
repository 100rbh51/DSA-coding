#include <iostream>
#include <string>
#include <vector>
using namespace std;
void solve() {
    int n;
    cin >> n;
    string s;
    cin >> s;
    if (n % 2 != 0) {
        cout << "NO\n";
        return;
    }
    vector<int> freq(26, 0);
    for (char c : s) {
        freq[c - 'a']++;
    }
    for (int count : freq) {
        if (count % 2 != 0) {
            cout << "NO\n";
            return;
        }
    }
    cout << "YES\n";
}
int main() {   
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);
    int t;
    cin >> t;
    while (t--) {
        solve();
    }
    return 0;
}
