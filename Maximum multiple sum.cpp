#include <iostream>
#include <vector>
using namespace std;

int sum_of_multiples(int x, int n) {
    int sum = 0;
    for (int i = x; i <= n; i += x) {
        sum += i;
    }
    return sum;
}

int main() {
    int t;
    cin >> t;
    vector<int> results(t);

    for (int i = 0; i < t; ++i) {
        int n;
        cin >> n;

        int max_sum = 0;
        int optimal_x = 2;

        for (int x = 2; x <= n; ++x) {
            int current_sum = sum_of_multiples(x, n);
            if (current_sum > max_sum) {
                max_sum = current_sum;
                optimal_x = x;
            }
        }

        results[i] = optimal_x;
    }

    for (int i = 0; i < t; ++i) {
        cout << results[i] << endl;
    }

    return 0;
}

