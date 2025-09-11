#include <iostream>
#include <algorithm>
using namespace std;


int main(void) {

    string line;
    cin >> line;

    sort(line.begin(), line.end());

    cout << line[line.length() - 1] << endl;

    return 0;
}