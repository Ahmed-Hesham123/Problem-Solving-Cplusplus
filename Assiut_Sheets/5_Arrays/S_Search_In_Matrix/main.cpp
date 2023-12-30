#include <bits/stdc++.h>

using namespace std;

int main()
{
    int rows, columns;
    cin>>rows>>columns;
    int arr[rows][columns];
    for(int i=0; i<rows; i++)
    {
        for(int j=0; j<columns; j++)
        {
            cin>>arr[i][j];
        }
    }
    int isExist, flag=0;
    cin>>isExist;
    for(int z=0; z<rows; z++)
    {
        for(int y=0; y<columns; y++)
        {
            if(arr[z][y] == isExist)
            {
                flag = 1;
                break;
            }
        }
    }

    if(flag == 1)
    {
        cout<<"will not take number"<<endl;
    }
    else
    {

        cout<<"will take number"<<endl;
    }

    return 0;
}
