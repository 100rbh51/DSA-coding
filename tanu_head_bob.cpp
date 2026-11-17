
#include <iostream>
using namespace std;
int main() {
    int T;
    cin >> T;
    while (T--) {
        int N;
        cin >> N;
        string s;
        cin >> s;
        bool indian = false;
        bool nonIndian = false;
        for (int i = 0; i < N; i++) {
            if (s[i] == 'I') {
                indian = true;
            }
            else if (s[i] == 'Y') {
                nonIndian = true;
            }
        }
        if (indian) {
            cout << "INDIAN" << endl;
        }
        else if (nonIndian) {
            cout << "NOT INDIAN" << endl;
        }
        else {
            cout << "NOT SURE" << endl;
        }
    }
}
