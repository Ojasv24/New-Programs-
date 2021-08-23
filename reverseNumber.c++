#include <bits/stdc++.h>

using namespace std;

int main() {
    int num = 12345;
    int temp = num;
    int reverseNumber = 0;
    while (temp > 0) {
        reverseNumber = reverseNumber * 10 + temp % 10;
        temp = temp / 10;
    }
    cout << "Reverse no of " << num << " is " << reverseNumber;

    return 0;
}
