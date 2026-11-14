#include <iostream>
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
        long long totalSkipped = 0;
        int previous, current;
        cin >> previous;
        for (int i = 1; i < N; ++i) {
            cin >> current;
            totalSkipped += abs(current - previous) - 1;
            previous = current;
        }
        cout << totalSkipped <<endl ;
    }
   
}