#include <iostream>

int main(int argc, char* argv[]) {

    int n;
    std::cin >> n;
    int m[n];
    int count = 0;

    for (int i = 0; i < n; i++) {
        std::cin >> m[i];
    }

    for (int i = 1; i <= n - 2; i++) {
        if (m[i - 1] < m[i] && m[i] > m[i + 1]) {
            count++;
        }
    }

    std::cout << count << std::endl;

    return 0;
}