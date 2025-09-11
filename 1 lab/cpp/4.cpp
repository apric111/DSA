#include <iostream>
#include <climits>
using namespace std;

int main(void) {
    
    int n;
    cin >> n;
    
    vector<int> m(n);
    for (int i = 0; i < n; i++) {
        cin >> m[i];
    }

    int min1 = INT_MAX;
    int min2 = INT_MAX;
    int index;

    for (int i = 0; i < n; i++) {
        if (m[i] < min1) {
            min1 = m[i];
            index = i;
        }
    }

    m.erase(m.begin() + index);

    for (int i : m) {
        if (i < min2) {
            min2 = i;
        }
    }

    cout << min1 << " " << min2 << endl;

    return 0;
}