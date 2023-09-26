#include <iostream>

using namespace std;

int main()
{
    int nums;
    cin>>nums;
    int arr[nums];
    int num = INT_MAX;
    for(int i=0; i<nums; i++)
    {
        cin>>arr[i];
        if(arr[i] < num)
        {
            num = arr[i];
        }
    }
    int counter = 0;
    for(int z=0; z<nums; z++)
    {
        if(arr[z] == num)
        {
            counter++;
        }
    }
    if(counter % 2 == 0)
    {
        cout<<"Unlucky"<<endl;
    }
    else
    {
        cout<<"Lucky"<<endl;
    }
    return 0;
}
