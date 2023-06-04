#include <iostream>
using namespace std;

bool ok(int* q, int n, int col) {
    for (int i = 0; i < col; i++) {
        if (q[i] == q[col] || abs(q[i] - q[col]) == col - i) {
            return false;
        }
    }
    return true;
}

int nqueens(int n) {
    int* q = new int[n];
    int col = 0;
    int solutions = 0;

    q[col] = -1;
    while (col >= 0) {
        q[col]++;
        bool found = false;
        while (q[col] < n) {
                if (ok(q, n, col)) {
                        found = true;
                        break;
                }
                q[col]++;
        }
        if (found) {
            if (col == n - 1) {
                solutions++;
            }
            else {
                col++;
                q[col] = -1;
            }
        }
        else {
            col--;
        }
    }

    delete[] q;
    return solutions;
}

int main() {
    int n;
    cout << "Enter the number of queens: ";
    cin >> n;
    for (int i = 1; i <= n; i++) {
        cout << "There are " << nqueens(i) << " solutions to the " << i << " queens problem." << endl;
    }
    return 0;
}
