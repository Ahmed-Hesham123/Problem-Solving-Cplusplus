#include <iostream>

using namespace std;

int main()
{
    long long N;
    cin >> N;

    for (long long X = 0; X <= 1000000000; X++)
    {
        long long Y_squared = (N * X * X) % N;
        if (Y_squared == 0)
        {
            long long Y = 0;
            cout << X << " " << Y << endl;
            return 0;
        }
    }

    cout << "No solutions" << endl;
    return 0;
}

// Another Solution
#include <iostream>

using namespace std;

int main()
{
    int num;
    cin >> num;
    cout << "0 0" << endl;
    return 0;
}