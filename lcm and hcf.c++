#include <iostream>

using namespace std;

int main() {
    int n1, n2, n3, i, pro, lcm, hcf = 1;

    cout << "Enter 3 Number : ";
    cin >> n1 >> n2 >> n3;

    pro = n1 * n2 * n3;

    //Evaluate the LCM
    for (i = 1; i <= pro; i++) {
        if (i % n1 == 0 && i % n2 == 0 && i % n3 == 0) {
            lcm = i;
            break;
        }
    }

    //Evaluate the HCF
    for (i = 2; i <= pro; i++) {
        if (n1 % i == 0 && n2 % i == 0 && n3 % i == 0) {
            hcf = i;
            break;
        }
    }
    cout << "LCM is : " << lcm << endl;
    cout << "HCF is : " << hcf << endl;
}