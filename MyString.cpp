#include <bits/stdc++.h>

using namespace std;

class MyString {
   private:
    string str;

   public:
    void getString(string gotstring) {
        str = gotstring;
    }

    MyString operator+(const MyString &b) {
        MyString temp;
        temp.str = this->str + b.str;
        return temp;
    }
    MyString operator*(int value) {
        MyString temp;
        string tempstirng;
        for (int i = 0; i < value; i++) {
            tempstirng += this->str;
        }
        temp.str = tempstirng;
        return temp;
    }

    MyString operator-(int value) {
        MyString temp;
        string tempstirng;
        for (int i = 0; i < value; i++) {
            tempstirng += this->str[i];
        }
        temp.str = tempstirng;
        return temp;
    }

    void print() {
        cout << str << endl;
    }
};

int main() {
    MyString a, b, c, d, f;
    a.getString("Ojasv");
    b.getString(" Rathore");

    c = a + b;
    d = a * 3;
    f = a - 2;  
    a.print();
    b.print();
    c.print();
    d.print();
    f.print();
}