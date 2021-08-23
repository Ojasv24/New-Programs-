#include <bits/stdc++.h>
using namespace std;

//Avg of array elemts

int main() {
    int arr[] = {1, 3, 4, 5, 6, 6};
    float arrSize = 6;
    float total = 0;
    float avg = 0.0;
    for (int i = 0; i < arrSize; i++) {
        total += arr[i];
    }
    avg = (total / arrSize);
    cout << avg;
}
