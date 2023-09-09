#include <iostream>
#include <bits/stdc++.h>
using namespace std;

int main()
{
    int nums, x, flag=0;
    cin>>nums;
    int arr[nums];
    for(int i =0; i< nums; i++){
        cin>>arr[i];
    }
    cin>>x;
    for(int j=0; j<nums; j++){
        if(arr[j] == x){
            cout<<j<<endl;
            flag=1;
            break;
        }
    }
    if(flag == 0) {
        cout<<-1<<endl;
    }
    return 0;
}
