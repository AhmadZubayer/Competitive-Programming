#include <iostream>
#include <vector>
#include <algorithm>

using namespace std;

// The rotation shifts each element one position to the left, and the first element moves to the end of the row.
vector<vector<int>> swapElements(vector<vector<int>> matrixA, int n, int m) {
    if (n == 1) {
        rotate(matrixA[0].begin(), matrixA[0].begin() + 1, matrixA[0].end());
    } else {
        swap(matrixA[0][0], matrixA[1][0]);
    }
    return matrixA;
}



vector<vector<int>> createMatrixB(vector<vector<int>> a, int n, int m) {
    vector<vector<int>> b(n, vector<int>(m));

    for (int i = 0; i < n; i++) {
        for (int j = 0; j < m; j++) {
            b[i][j] = a[(i + 1) % n][j];
        }
    }

    return b;
}

int main() {
    int t;
    cin >> t;
    while (t--) {
        int n, m;
        cin >> n >> m;
        vector<vector<int>> matrixA(n, vector<int>(m));

        for (int i = 0; i < n; i++) {
            for (int j = 0; j < m; j++) {
                cin >> matrixA[i][j];
            }
        }

        if (n == 1 && m == 1) {
            cout << -1 << endl;
            continue;
        }

        if ((n == 1 && m >= 2) || (n == 2 && m == 1)) {
            matrixA = swapElements(matrixA, n, m);
            for (int i = 0; i < n; i++) {
                for (int j = 0; j < m; j++) {
                    cout << matrixA[i][j] << " ";
                }
                cout << endl;
            }
            continue;
        }

        bool isPossible = true;
        vector<vector<int>> matrixB = createMatrixB(matrixA, n, m);

        for (int i = 0; i < n; i++) {
            for (int j = 0; j < m; j++) {
                if (matrixB[i][j] == matrixA[i][j]) {
                    isPossible = false;
                    break;
                }
            }
            if (!isPossible) break;
        }

        if (isPossible) {
            for (int i = 0; i < n; i++) {
                for (int j = 0; j < m; j++) {
                    cout << matrixB[i][j] << " ";
                }
                cout << endl;
            }
        } else {
            cout << -1 << endl;
        }
    }
    return 0;
}
