#include <iostream>
#include <cmath>
#include <vector>
using namespace std;

int main(void) {

    int n;
    cin >> n;

    vector<int> m(n);
    for (int i = 0; i < n; i++) {
        cin >> m[i];
    }

    int x;
    cin >> x;

    int temp = pow(10, 8);
    int res;
    
    for (int i : m) {
        if (abs(x - i) < temp) {
            temp = abs(x - i);
            res = i;
        }
    }

    cout << res << endl;

    return 0;
}