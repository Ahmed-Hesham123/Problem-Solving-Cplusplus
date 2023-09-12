#include <iostream>

using namespace std;

int main()
{
    int nums;
    cin>>nums;
    int arr[nums];
    for(int i=0; i<nums; i++)
    {
        cin>>arr[i];
    }
    int minimum = arr[0], num =0;
    for(int j=1; j<nums; j++)
    {
        if(arr[j] < minimum)
        {
            minimum = arr[j];
            num = j;
        }
    }
    cout<<minimum<<" "<<num+1<<endl;
    return 0;
}
