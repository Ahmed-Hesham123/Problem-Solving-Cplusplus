#include <iostream>

using namespace std;

int main()
{
    int nums;
    cin>>nums;
    for(int i=0; i<nums; i++)
    {
        int nums2;
        cin>>nums2;
        int arr[nums2];
        for(int j=0; j<nums2; j++)
        {
            cin>>arr[j];
        }
        int res = INT_MAX;
        for(int z=0; z<nums2; z++)
        {
            for(int y=z+1; y<nums2; y++)
            {
                int newRes = arr[z]+arr[y]+(y - z);
                if(newRes < res)
                {
                    res = newRes;
                }
            }
        }
        cout<<res<<endl;
    }
    return 0;
}
