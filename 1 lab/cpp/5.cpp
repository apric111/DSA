#include <iostream>
using namespace std;

int main(void) {

    int n;
    cin >> n;
    vector<int> m(n);
    for (int i = 0; i < n; i++) {
        cin >> m[i];
    }
    int last = m.back();

    for (int i = n - 2; i > -1; i -= 1) {
        m[i + 1] = m[i];
        m[i] = 0;
    }

    m[0] = last;

    for (int i : m) {
        cout << i << " ";
    }

    return 0;
}