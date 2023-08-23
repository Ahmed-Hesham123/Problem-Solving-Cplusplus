#include <iostream>

using namespace std;

int main()
{
    int n, a, b, sum=0;
    cin>>n>>a>>b;
    for (int i = 1; i <= n; ++i) {
        int digitSum = 0;
        int num = i;

        while (num > 0) {
            digitSum += num % 10;
            num /= 10;
        }

        if (digitSum >= a && digitSum <= b) {
            sum += i;
        }
    }

    cout << sum <<endl;
    return 0;
}
