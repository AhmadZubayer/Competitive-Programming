// Rated 900
// Problem: https://codeforces.com/contest/847/problem/G
// Solution: https://codeforces.com/contest/847/submission/278691680

#include <iostream>
#include <vector>

using namespace std;

int main() {
    int n;
    cin >> n;

    vector<int> slots(7, 0);

    for (int i = 0; i < n; i++) {
        string schedule;
        cin >> schedule;

        for (int j = 0; j < 7; j++) {
            if (schedule[j] == '1') {
                slots[j]++;
            }
        }
    }

    int maxSlots = 0;
    for (int i = 0; i < 7; i++) {
        maxSlots = max(maxSlots, slots[i]);
    }

    cout << maxSlots << endl;

    return 0;
}

/*
EXPLANATION:
1. Inputs the number of groups.
2. Creates a vector "Slots" with 7 slots, each initialized to 0.
3. Inputs the schedules as Strings of 7 chars.
4. The second for loop iterates through each character of the strings
   - If any character in the String is '1', the corresponding slot in the Slots vector gets incremented by 1.
   - This repeats for all n strings.
5. After all strings have been scanned, determine the maximum value in the final incremented Slots vector.
   - the maximum value represents the minimum number of rooms required.

Alternatively,
The problem can be thought of as a 2D array, where each column represents the schedule for groups for a particular time slot.
The sum of each column represents the number of groups that have classes in that time slot.
The maximum value among these sums is the minimum number of rooms required.
*/
