#include <iostream>

using namespace std;

int main()
{
    long long nums;
    cin>>nums;
    long long maxCount= 0;
    for(long long i=0; i<nums; i++)
    {
        long long num;
        cin>>num;
        long long counter = 0;
        while(num % 2 ==0)
        {
            counter++;
            num /= 2;
        }
        if(maxCount < counter)
        {
            maxCount = counter;
        }


    }
    cout<<maxCount<<endl;
    return 0;
}
