#include <iostream>
#include <climits>

int main(int argc, char* argv[]) {
    
    int n;
    std::cin >> n;
    
    int m[n];
    for (int i = 0; i < n; i++) {
        std::cin >> m[i];
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

    m[index] = INT_MAX;

    for (int i : m) {
        if (i < min2) {
            min2 = i;
        }
    }

    std::cout << min1 << " " << min2 << std::endl;

    return 0;
}