#include <iostream>

int main(int argc, char* argv[]) {

    int n;
    std::cin >> n;
    int m[n];
    for (int i = 0; i < n; i++) {
        std::cin >> m[i];
    }
    int last = m[n - 1];

    for (int i = n - 2; i > -1; i -= 1) {
        m[i + 1] = m[i];
        m[i] = 0;
    }

    m[0] = last;

    for (int i : m) {
        std::cout << i << " ";
    }
    std::cout << std::endl;

    return 0;
}