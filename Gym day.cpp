#include <iostream>
#include <vector>
#include <tuple>
using namespace std;

vector<int> musa(int T, vector<tuple<int, int, int>>& cases) {
    vector<int> res;

    for (int i = 0; i < T; i++) {
        int d, x, y;
        tie(d, x, y) = cases[i];

        if (y >= x) {
            res.push_back(0);
            continue;
        }

        bool ok = false;

        for (int n = 0; n <= 100; n++) {
            int disc = min(n * d, 100);
            int new_price = x * (100 - disc) / 100;
            int budget_left = y - n;

            if (budget_left >= new_price) {
                res.push_back(n);
                ok = true;
                break;
            }
        }

        if (!ok) {
            res.push_back(-1);
        }
    }

    return res;
}

int main() {
    int T;
    cin >> T;

    vector<tuple<int, int, int>> cases;

    for (int i = 0; i < T; i++) {
        int d, x, y;
        cin >> d >> x >> y;
        cases.push_back(make_tuple(d, x, y));
    }


    vector<int> results = musa(T, cases);


    for (int result : results) {
        cout << result << endl;
    }

    return 0;
}
