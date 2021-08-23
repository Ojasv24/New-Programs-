#include <bits/stdc++.h>

using namespace std;

int main() {
    vector<int> A = {10, 5, 1, 7, 40, 50};
    stack<int> s;
    int root = INT_MIN;
    int x = 0;
    s.push(A[0]);
    for (int i = 1; i < A.size(); i++) {
        while (!s.empty() && A[i] > s.top()) {
            root = s.top();
            s.pop();
        }

        if (root > A[i])
            return 0;

        s.push(A[i]);
    }
    return 1;
}
