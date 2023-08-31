#include <iostream>

using namespace std;

int main()
{
    int nums,range, minimum, counter=0, flag=1;
    cin>>nums>> range;
    for(int i=1; i<=nums; i++)
    {
        int number;
        cin>>number;
        if(flag)
        {
            minimum = number;
            flag=0;
        }else {
            if(minimum > number){
                minimum = number;
            }
        }
        counter++;
        if(counter == range || i == nums){
            cout<<minimum<<" ";
            counter=0;
            flag=1;
        }

    }
    return 0;
}
