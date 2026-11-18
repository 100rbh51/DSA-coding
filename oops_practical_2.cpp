#include <iostream>
using namespace std;
class Demo {
public:
    void call_by_value(int n) {
        n = n + 10;
        cout << n << endl;
    }
    void call_by_reference(int &n) {
        n = n + 10;
        cout << n << endl;
    }
    void call_by_address(int *n) {
        *n = *n + 10;
        cout << *n << endl;
    }
};

int main() {
    Demo d;
    int a = 10;
    
    cout << a << endl;
    d.call_by_value(a);
    cout << a << endl;
    
    d.call_by_reference(a);
    cout << a << endl;
    
    d.call_by_address(&a);
    cout << a << endl;

}