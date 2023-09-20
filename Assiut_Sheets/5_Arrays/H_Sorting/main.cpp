#include <iostream>

using namespace std;

int main()
{
    long long nums;
    cin>>nums;
    long long arr[nums];
    for(long long i =0; i<nums; i++)
    {
        cin>>arr[i];
    }
    bool swapped;
    do
    {
        swapped = false;
        for(long long j=0; j< nums; j++)
        {
            if(arr[j] > arr[j+1])
            {
                int temp = arr[j];
                arr[j] = arr[j+1];
                arr[j+1] = temp;
                swapped = true;
            }
        }
    } while(swapped);
        for(long long z=0; z<nums; z++)
        {
            cout<<arr[z]<<" ";
        }
    return 0;
}
