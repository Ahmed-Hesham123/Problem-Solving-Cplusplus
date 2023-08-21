#include <iostream>

using namespace std;

int main()
{
    int nums;
    cin>>nums;
    int num1, num2, minNum, maxNum, sum=0;
    for(int i=0; i < nums; i++)
    {
        cin>>num1>>num2;
        if(num1 > num2)
        {
            maxNum = num1;
            minNum = num2+1;
        }
        else
        {
            maxNum = num2;
            minNum = num1+1;
        }
        for(int j=minNum; j< maxNum; j++)
        {
            if(j%2 != 0)
            {
                sum+=j;
            }
        }
        cout<<sum<<endl;
        sum=0;
    }
    return 0;
}
