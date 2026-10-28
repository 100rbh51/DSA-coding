#include <iostream>
#include <string>
#include <algorithm>
using namespace std;
void solve() {
    int n;
    cin >> n;
    string a, b;
    cin >> a >> b;
    int count_a = count(a.begin(), a.end(), '1');
    int count_b = count(b.begin(), b.end(), '1');
    if (count_a == count_b) {
        cout << "YES\n";
    } else {
        cout << "NO\n";
    }
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