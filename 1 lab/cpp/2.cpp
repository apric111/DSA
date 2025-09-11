#include <iostream>

int main(int argc, char* argv[]) {

    int n;
    std::cin >> n;
    int m[n];
    for (int i = 0; i < n; i++) {
        std::cin >> m[i];
    }

    int x;
    std::cin >> x;

    int temp = INT_MAX;
    int res;
    
    for (int i : m) {
        if (abs(x - i) < temp) {
            temp = abs(x - i);
            res = i;
        }
    }

    std::cout << res << std::endl;

    return 0;
}