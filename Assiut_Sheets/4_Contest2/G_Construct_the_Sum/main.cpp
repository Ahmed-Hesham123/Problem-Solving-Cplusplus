#include <iostream>
#include <vector>

using namespace std;

int main() {
    int T;
    cin >> T;

    while (T--) {
        long long n, s;
        cin >> n >> s;

        if (n * (n + 1) / 2 < s) {
            cout << -1 << endl;  // Not possible to find distinct positive integers.
        } else {
            vector<int> numbers;
            long long currentSum = 0;

            for (int i = n; i >= 1; i--) {
                if (currentSum + i <= s) {
                    currentSum += i;
                    numbers.push_back(i);
                }

                if (currentSum == s) {
                    break;
                }
            }

            for (int i = 0; i < numbers.size(); i++) {
                cout << numbers[i];
                if (i < numbers.size() - 1) {
                    cout << " ";
                }
            }
            cout << endl;
        }
    }

    return 0;
}
