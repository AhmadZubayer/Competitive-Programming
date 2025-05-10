#include <iostream>
#include <cstring>
using namespace std;

class Stack {
public:
    static const int Max = 1000000;
    int Stack[Max];
    int top = -1;

    void push(int x) {
        Stack[++top] = x;
    }

    int pop() {
        if (top == -1) {
            return -1;
        } else {
            return Stack[top--];
        }
    }

    int peek() {
        if (top == -1) {
            return -1;
        } else {
            return Stack[top];
        }
    }

    bool isEmpty() {
        return top == -1;
    }
};

void longestRegularBracketSequence(char s[], int &maxLength, int &count) {
    int n = strlen(s);
    int d[1000006];
    Stack st;

    maxLength = 0;
    count = 1;

    memset(d, -1, sizeof(d));

    for (int i = 0; i < n; i++) {
        if (st.isEmpty() || s[i] == '(') {
            st.push(i);
            continue;
        }

        int pos = st.peek();

        if (s[pos] == '(') {
            st.pop();
            if (pos > 0 && d[pos - 1] != -1) {
                d[i] = d[pos - 1];
            } else {
                d[i] = pos;
            }

            int len = i - d[i] + 1;
            if (len == maxLength) {
                count++;
            } else if (len > maxLength) {
                maxLength = len;
                count = 1;
            }
        } else {
            st.push(i);
        }
    }
}

int main() {
    char s[1000001];
    cin >> s;

    int maxLength, count;
    longestRegularBracketSequence(s, maxLength, count);

    cout << maxLength << " " << count << endl;

    return 0;
}
