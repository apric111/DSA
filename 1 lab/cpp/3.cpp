#include <iostream>

int main(int argc, char* argv[]) {

    char line[101];
    std::cin >> line;
    char res = 'a';

    for (int i = 0; line[i] != '\0'; i++) {
        if (line[i] > res) {
            res = line[i];
        }
    }

    std::cout << res << std::endl;

    return 0;
}