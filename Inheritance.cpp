#include <iostream>
using namespace std;

class A {
   public:
    void BaseClassContent() {
        cout << "This is Base Class";
    }
    void print() {
        cout << "Print Method";
    }
};

class B : public A {
   public:
    void printing() {
        cout << "Class B is printing function";
    }
};
int main() {
    B objB;
    objB.BaseClassContent();
    cout << endl;
    objB.print();
}