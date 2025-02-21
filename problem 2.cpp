#include <iostream>
#include <vector>

using namespace std;

int main() {
    int T;
    cin >> T;

    for (int t = 1; t <= T; ++t) {
        int N;
        cin >> N;

        vector<int> A(N);
        vector<int> B(N);

        for (int i = 0; i < N; ++i) {
            cin >> A[i];
        }

        for (int i = 0; i < N; ++i) {
            cin >> B[i];
        }

        int minDeletedLength = N;  // Initialize with the maximum possible length

        for (int i = 0; i < N; ++i) {
            if (A[i] == B[i]) {
                int j = i;
                while (j < N && A[j] == B[j]) {
                    ++j;
                }
                minDeletedLength = min(minDeletedLength, j - i);
                i = j - 1;
            }
        }

        cout << "Case " << t << ": " << minDeletedLength +1 << endl;
    }

    return 0;
}
