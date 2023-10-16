#include <iostream>
using namespace std;

int main()
{
    int a, b, counter=0;
    cin>>a>>b;
    string s;
    cin>>s;
    if(s[a] != '-' || s.size() != (a+b+1) )
    {
        cout<<"No"<<endl;
        return 0;
    }
    for(int i=0; i<s.size(); i++)
    {
        if(s[i] >= 48 && s[i] <= 57 && i != a)
        {
            counter++;
        }
    }
    if(counter == a+b)
    {
        cout<<"Yes"<<endl;
    }
    else
    {
        cout<<"No"<<endl;
    }
    return 0;
}
