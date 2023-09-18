#include <iostream>

using namespace std;

int main()
{
    int nums;
    cin >> nums;
    int arr[nums];

    for(int i = 0; i < nums; i++)
    {
        cin >> arr[i];
    }

    int flag = 1;

    for(int j = 0, z = nums - 1; j < z; j++, z--)
    {
        if (arr[j] != arr[z])
        {
            flag = 0;
            break;
        }
    }

    if(flag == 1)
    {
        cout << "YES" << endl;
    }
    else
    {
        cout << "NO" << endl;
    }

    return 0;
}
