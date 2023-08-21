#include <bits/stdc++.h>

using namespace std;

int main()
{
    int n, m;

    while(cin>>n>>m)
    {
        int minimum=0,maximum=0, sum=0;

        if(n <= 0 || m <= 0){
            return 0;
        }
        if(n <= m){
            maximum=m;
            minimum=n;
        } else {
            maximum=n;
            minimum=m;
        }
            for(int j = minimum; j <= maximum; j++){
                cout<<j<<" ";
                sum += j;
            }
                cout<<"sum ="<<sum<<endl;
    }

    return 0;
}
