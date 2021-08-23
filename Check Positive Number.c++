#include <iostream>

using namespace std;

int main() {
    int n;
    cout << "Enter a positve Number: ";
    cin >> n;

    if (n < 0) {
        cout << "Negative Number";
    } else {
        cout << "Positive Number";
    }
}