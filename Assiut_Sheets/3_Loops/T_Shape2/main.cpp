#include <iostream>

using namespace std;

int main()
{
    int num;
    cin>>num;
    for(int i=0; i<num; i++)
    {
        for(int z=0; z <num-i-1; z++)
        {
            cout<<" ";
        }
        for(int j=0; j<2*i+1; j++)
        {
            cout<<"*";
        }
        cout<<endl;
    }
    return 0;
}
