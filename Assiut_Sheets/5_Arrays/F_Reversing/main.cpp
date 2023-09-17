#include <iostream>

using namespace std;

int main()
{
    int nums;
    cin>>nums;
    int arr[nums];
    for(int i=0; i<nums; i++){
        cin>>arr[i];
    }
    for(int j=nums-1; j >= 0; j--){
        cout<<arr[j]<<" ";
    }
    return 0;
}
