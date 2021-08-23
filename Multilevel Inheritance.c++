#include <iostream>
using namespace std;

class A {
   public:
    void BaseClassContent() {
        cout << "This is Base Class.";
    }
    void print() {
        cout << "Print Meathod";
    }
};

class B : public A {
   public:
    void printing() {
        cout << "Class B is printing function";
    }
};

class C : public B {
   public:
    void classC() {
        A::print();
        cout << "Class C";
    }
};

int main() {
    C objC;
    B objB;
    cout << "C Class Multilevel Inheritance" << endl;
    objC.BaseClassContent();
    objC.print();
    cout << endl;
    // cout << "B Class Inheritance" << endl;
    // objB.BaseClassContent();
    // objB.print();
    // cout << "c Class Inheritance" << endl;
    // objC.printing();
    // cout << endl;
    // objC.classC();
    return 0;
}