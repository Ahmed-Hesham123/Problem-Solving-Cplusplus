#include <bits/stdc++.h>
using namespace std;

int main()
{
    int nums;
    cin>>nums;
    int arr[nums];
    for(int i=0; i<nums; i++){
        cin>>arr[i];
    }
    for(int j=0; j<nums; j++){
        if(arr[j] > 0){
            arr[j] = 1;
        } else if(arr[j] < 0) {
            arr[j] = 2;
        }
        cout<<arr[j]<<" ";
    }
    cout<<endl;
    return 0;
}
