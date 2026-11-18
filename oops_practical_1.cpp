#include <iostream>
using namespace std;
class Student {
private:
    int rollNo;
    string name;
    float marks;
public:
    void input() {
        cin >> rollNo;
        cin >> marks;
        cin>>name;
    }
    void display() {
        cout<< rollNo << endl;
        cout << name << endl;
        cout << marks << endl;
    }
};

int main() {
    Student s; 
    s.input();
    s.display();
}