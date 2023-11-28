#include <iostream>

using namespace std;

int main()
{
    int numOfTestCases;
    cin>>numOfTestCases;
    for(int i =0; i<numOfTestCases; i++)
    {

        int sizeOfArr,counter = 0;
        cin>>sizeOfArr;
        int arr[sizeOfArr];
        for(int j = 0; j<sizeOfArr; j++)
        {

            cin>>arr[j];

        }
        counter = sizeOfArr;
        int y=0, z=0;
        while(true)
        {
            if(z == sizeOfArr - 1)
            {
                break;
            }
            if(arr[y] > arr[y+1])
            {
                z++;
                y = z;
                continue;
            }
            counter++;
            y++;
            if(y == sizeOfArr - 1)
            {
                z++;
                y = z;
            }
        }
        cout<<counter<<endl;

    }
    return 0;
}
