#include <iostream>

using namespace std;

int main()
{
    int nums;
    cin>>nums;
    int arr[nums];
    for(int i=0; i< nums; i++)
    {
        cin>>arr[i];
    }


    int minimum = arr[0],
        maximum = arr[0];
    for(int j=0; j<nums; j++)
    {
        if(arr[j] < minimum)
        {
            minimum = arr[j];
        }
        if(arr[j] > maximum)
        {
            maximum = arr[j];
        }
    }
    for(int z=0; z<nums; z++)
    {
        if(arr[z] == minimum)
        {
            arr[z] = maximum;
        }
        else if(arr[z] == maximum)
        {
            arr[z] = minimum;
        }
    }
    for(int y=0; y<nums; y++)
    {
        cout<<arr[y]<<" ";
    }
    return 0;
}
