#include <iostream>
#include <vector>
#include <algorithm>

using namespace std;

int main() {
    int N;
    cin >> N; 

    vector<string> S(N);
    for (int i = 0; i < N; ++i) {
                cin >> S[i]; 
    }

    int M = 0;
    for (const string& s : S) {
        M = max(M, static_cast<int>(s.size()));
    }

    vector<string> T(M, string(N, '*'));
    for (int i = 0; i < M; ++i) {
        for (int j = 0; j < N; ++j) {
            if (i < S[j].size()) {
                T[i][j] = S[j][S[j].size() - i - 1];
            }
        }
    }

    for (const string& row : T) {
        cout << row << endl;
    }

    return 0;
}
