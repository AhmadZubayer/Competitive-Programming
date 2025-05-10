#include <iostream>
using namespace std;

int main() {
    int t, n;
    cin >> t;

    for (int i = 0; i < t; i++) {
        cin >> n;

        char beatmap[n][4];  // Correct 2D array declaration: n rows, 4 columns

        // Read the beatmap input
        for (int j = 0; j < n; j++) {
            for (int k = 0; k < 4; k++) {
                cin >> beatmap[j][k];
            }
        }

        int arr[4];  // Enough space to store indices for all possible '#' occurrences
        int index = 0;

        // Store the row index (1-based) for every '#' occurrence
        for (int j = 0; j < n; j++) {
            for (int k = 0; k < 4; k++) {
                if (beatmap[j][k] == '#') {
                    arr[index] = j + 1;  // Store the 1-based index
                    index++;
                }
            }
        }

        // Print the stored indices in reverse order
        for (int c = index; c >= 0; c--) {
            cout << arr[c] << " ";
        }
        cout << endl;
    }

    return 0;
}
