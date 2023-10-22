#include <iostream>
#include <vector>
using namespace std;

long long fibonacci(int num)
{
    if(num == 1) return 0;
    if(num == 2) return 1;
    vector<long long> fib(num);
    fib[0] = 0;
    fib[1] = 1;
    for (int i = 2; i < num; i++)
    {
        fib[i] = fib[i-1] + fib[i-2];
    }
    return fib[num - 1];
}

int main()
{
    int num;
    cin >> num;

    long long fib = fibonacci(num);
    cout<<fib<<endl;

    return 0;
}
