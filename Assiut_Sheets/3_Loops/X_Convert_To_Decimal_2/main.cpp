#include <iostream>
#include <cmath>
using namespace std;

int main()
{
    int num;
    cin>>num;
    for(int i=0;i<num;i++){
        int number;
        cin>>number;
        int counter=0;
        for(int z=number;z>0;z/=2){
            if(z%2 == 1){
                counter++;
            }
        }
        int sum = 0;
        for(int j=0;j<counter;j++){
            sum+=pow(2, j)*1;
        }
        cout<<sum<<endl;

    }
    return 0;
}
