#include <iostream>
#include <cmath>
using namespace std;

int main() {
    int t;
    cin >> t;

    while (t--) {
        char grid[10][10];

        // Read the grid for the current test case
        for (int i = 0; i < 10; i++) {
            for (int j = 0; j < 10; j++) {
                cin >> grid[i][j];
            }
        }

        int points = 0;

        // Iterate through the grid and calculate points
        for (int i = 0; i < 10; i++) {
            for (int j = 0; j < 10; j++) {
                if (grid[i][j] == 'X') {
                    int distance = max(abs(i - 4), abs(j - 4)); // Calculate the distance from the center
                    if (distance < 5) {
                        points += (6 - distance);
                    }
                }
            }
        }

        cout << points << endl;
    }

    return 0;
}
