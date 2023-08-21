#include <bits/stdc++.h>

using namespace std;

int main()
{
    int num;
    cin>>num;

    string nums;

    for(int i=0; i<num; i++){
        cin>>nums;
        for(int j=nums.size()-1; j>=0; j--){
            cout<<nums[j]<<" ";
        }
        cout<<endl;
    }

    return 0;
}
