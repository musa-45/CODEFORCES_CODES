#include <iostream>
#include <string>

using namespace std;

int main() {
    int t;
    cin >> t;

    while (t--) {
        string s;
        cin >> s;

        int countA = 0, countB = 0;

        for (char c : s) {
            if (c == 'A') {
                countA++;
            } else {
                countB++;
            }
        }

        char result = (countA > countB) ? 'A' : 'B';
        cout << result << endl;
    }

    return 0;
}

