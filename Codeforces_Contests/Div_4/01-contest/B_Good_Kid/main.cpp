#include <bits/stdc++.h>
using namespace std;

int main()
{
    int nums;
    cin>>nums;
    for(int i=0; i<nums; i++)
    {
        int subNums;
        cin>>subNums;
        long long arr[subNums];
        for(long long j=0; j<subNums; j++)
        {
            cin>>arr[j];
        }
        long long sum = 1;
        for(long long z=0; z<subNums; z++)
        {
            sum *= arr[z];
        }
        for(long long y=0; y<subNums; y++)
        {
            arr[y] +=1;
            long long moreSum = 1;
            for(int a=0; a<subNums; a++)
            {
                moreSum *= arr[a];
            }
            if(moreSum > sum)
            {
                sum = moreSum;
            }
            arr[y] -=1;
        }
        cout<< sum<<endl;
    }
    return 0;
}
