#include <iostream>

using namespace std;

int main()
{
    long long nums, sum=0;
    cin>>nums;
    for(long long i = 0; i<nums; i++){
        long long num1, num2;
        cin>>num1>>num2;
        long long minimum = num1, maximum = num2;
        if(num1 > num2){
         minimum = num2, maximum = num1;
        }
        minimum--;
        long long result1 = minimum*(minimum+1) / 2;
        long long result2 = maximum*(maximum+1) / 2;
        sum = result2 - result1;
        cout<<sum<<endl;
        sum=0;
    }
    return 0;
}
