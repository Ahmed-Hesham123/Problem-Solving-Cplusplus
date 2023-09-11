#include <iostream>

using namespace std;

int main()
{
    int nums;
    cin>>nums;
    int arr[nums];
    for(int i=0;i<nums; i++){
        cin>>arr[i];
    }
    for(int j=0; j<nums; j++){
        if(arr[j] <= 10){
            cout<<"A["<<j<<"]"<<" = "<<arr[j]<<endl;
        }
    }
    return 0;
}
