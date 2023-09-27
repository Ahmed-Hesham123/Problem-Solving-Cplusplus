#include <iostream>
using namespace std;

int main()
{
    int nums;
    cin>>nums;
    string arr;
    cin>>arr;
    int res=0;
    for(int i=0; i<nums; i++){
        res += (arr[i] - '0');
    }
    cout<<res<<endl;
    return 0;
}
