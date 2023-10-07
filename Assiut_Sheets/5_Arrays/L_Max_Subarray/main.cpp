#include <iostream>

using namespace std;

int main()
{
    // number of test cases.
    int nums;
    cin>>nums;
    for(int i=0; i<nums; i++)
    {
        // number of elements.
        int nums2;
        cin>>nums2;
        int arr[nums2];
        for(int j=0; j<nums2; j++)
        {
            cin>>arr[j];
        }

        // iteration to find the maximum sub arr
        for(int z=0; z<nums2; z++)
        {
            int maximum = arr[z];
            for(int y=z; y<nums2; y++)
            {
                if(arr[y] > maximum)
                {
                    maximum = arr[y];
                }
                cout<<maximum<<" ";
            }
        }
        cout<<endl;
    }
    return 0;
}
