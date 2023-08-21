#include <iostream>

using namespace std;

int main()
{
    int num;
    cin>>num;
    int fib[num];
    fib[0] = 0;
    fib[1] = 1;
    for(int i =2; i< num; i++)
    {
        fib[i] = fib[i - 1] + fib[i - 2];
    }

    for (int i = 0; i < num; i++)
    {
        cout << fib[i] << " ";
    }
    return 0;
}
