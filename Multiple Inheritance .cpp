#include <iostream>
using namespace std;

class Collage {
   public:
    Collage() {
        cout << "BUIT" << endl;
    }
};

class Student {
   public:
    Student() {
        cout << "Ojasv Rathore" << endl;
    }
};

class Bio : public Collage, public Student {};

int main() {
    Bio s1;
    return 0;
}