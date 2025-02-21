#include <iostream>
#include <string>
#include <vector>
using namespace std;

int minTotalCost(string s) {
    int n = s.size();
    int transitions = 0;

    // Count the number of transitions from 0 to 1 or from 1 to 0
    for (int i = 1; i < n; ++i) {
        if (s[i] != s[i - 1]) {
            transitions++;
        }
    }

    // If there are no transitions, the string is already sorted
    if (transitions == 0) {
        return 0;
    }

    // The minimum total cost is the number of transitions
    // multiplied by the length of the substring between transitions
    return transitions + 1;
}

int main() {
    int t;
    cin >> t;

    while (t--) {
        string s;
        cin >> s;
        cout << minTotalCost(s) << endl;
    }

    return 0;
}
