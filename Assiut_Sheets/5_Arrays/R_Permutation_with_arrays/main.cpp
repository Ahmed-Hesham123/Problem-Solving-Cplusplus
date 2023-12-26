#include <bits/stdc++.h>

using namespace std;

int main()
{
    int arrSize;
    cin>>arrSize;
    int arrA[arrSize], arrB[arrSize];
    for(int i=0; i<arrSize; i++)
    {
        cin>>arrA[i];
    }
    sort(arrA,arrA+arrSize);

    for(int j=0; j<arrSize; j++)
    {
        cin>>arrB[j];
    }
    sort(arrB,arrB+arrSize);

    int flag=0;
    for(int z=0; z<arrSize; z++) {
        if(arrA[z] != arrB[z]) {
            flag=1;
            break;
        }
    }

    if(flag == 1) {
        cout<<"no"<<endl;
    } else {
        cout<<"yes"<<endl;
    }

    return 0;
}
