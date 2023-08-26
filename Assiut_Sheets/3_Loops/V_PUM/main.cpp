#include <iostream>

using namespace std;

int main()
{
    int n;
    cin>>n;
    int i =1, counter=1;
    while(i <= n)
    {
        cout<<counter<<" "<<counter+1<<" "<<counter+2<<" "<<"PUM"<<endl;
        counter+=4;
        i++;
    }
    return 0;
}
