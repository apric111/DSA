#include <iostream>
#include <numeric>
using namespace std;

int multi(vector<int> A, vector<int> B) {
    vector<int> C;
    for (int i = 0; i < A.size(); i++) {
        C.push_back(A[i] * B[i]);
    }
    return accumulate(C.begin(), C.end(), 0);
}

vector<vector<int>> roll(vector<vector<int>> A, int n, int m) {

    vector<vector<int>> res;
    vector<int> temp;

    for (int j = 0; j < m; j++) {
        temp.clear();
        for (int i = 0; i < n; i++) {
            temp.push_back(A[i][j]);
        }
        res.push_back(temp);
    }

    return res;
}

int main(void) {
    int n, m, k;
    cin >> n >> m >> k;
    vector<vector<int>> A(n, vector<int>(m));
    vector<vector<int>> B(m, vector<int>(k));
    vector<vector<int>> C;

    for (int i = 0; i < n; i++) {
        for (int j = 0; j < m; j++) {
            cin >> A[i][j];
        }
    }

    for (int i = 0; i < m; i++) {
        for (int j = 0; j < k; j++) {
            cin >> B[i][j];
        }
    }

    B = roll(B, m, k);

    vector<int> temp;
    for (int a = 0; a < n; a++) {
        temp.clear();
        for (int b = 0; b < k; b++) {
            temp.push_back(multi(A[a], B[b]));
        }
        C.push_back(temp);
    }

    for (vector<int> i : C) {
        for (int j = 0; j < i.size(); j++) {
            cout << i[j];
            if (j != i.size() - 1) cout << " ";
        }
        cout << endl;
    }

    return 0;
}