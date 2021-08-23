#include <iostream>

using namespace std;

int main() {
    int n;
    cout << "Enter a positve Number: ";
    cin >> n;

    if (n < 0) {
        cout << "Negative number is entered";
    }

    for (int i = 1; i <= n; i++) {
        cout << i;
    }
}