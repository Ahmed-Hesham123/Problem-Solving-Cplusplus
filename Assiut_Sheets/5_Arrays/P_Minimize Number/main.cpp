#include <iostream>

using namespace std;

int main()
{
    int nums;
    cin>>nums;;
    int arr[nums];
    for(int i=0; i<nums; i++)
    {
        cin>>arr[i];
    }
    int newCounter = 0;
    for(int j=0; j<nums; j++)
    {
        int counter=0;
        if(arr[j] % 2 != 0)
        {
            cout<<0<<endl;
            return 0;
        }
        while(arr[j] % 2 == 0)
        {
            counter++;
            arr[j] /= 2;
        }
        if(j == 0 || newCounter > counter)
        {
            newCounter = counter;
        }

    }
    cout<<newCounter<<endl;
    return 0;
}
