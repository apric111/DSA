#include <iostream>

int main(int argc, char* argv[]) {

    int n;
    int m;
    int k;
    std::cin >> n >> m >> k;
    int A[n][m];
    int B[m][k];
    int C[n][k];

    for (int i = 0; i < n; i++) {
        for (int j = 0; j < m; j++) {
            std::cin >> A[i][j];
        }
    }

    for (int i = 0; i < m; i++) {
        for (int j = 0; j < k; j++) {
            std::cin >> B[i][j];
        }
    }

    int temp[n];
    int B_new[k][m];

    for (int j = 0; j < k; j++) {
        for (int i = 0; i < m; i++) {
            temp[i] = B[i][j];
        }
        
        for (int x = 0; x < m; x++) {
            B_new[j][x] = temp[x];
        }
    }

    for (int i = 0; i < n; i++) {
        for (int j = 0; j < k; j++) {
            int sum = 0;
            for (int x = 0; x < m; x++) {
                sum = sum + (A[i][x] * B_new[j][x]);
            }
            C[i][j] = sum;
        }
    }

    for (int i = 0; i < n; i++) {
        for (int j = 0; j < k; j++) {
            std::cout << C[i][j];
            if (j != k - 1) {
                std::cout << " ";
            }
        }
        std::cout << std::endl;
    }
    return 0;
}