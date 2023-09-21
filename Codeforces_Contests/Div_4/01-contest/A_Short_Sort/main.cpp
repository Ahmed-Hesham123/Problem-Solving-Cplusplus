#include <bits/stdc++.h>
using namespace std;

bool canTransform(string word)
{

    string card = "abc";
    if(word == card)
    {
        return true;
    }

    if (word.size() != card.size())
    {
        return false;
    }

    // reverse
    string reversedWord = word;
    reverse(reversedWord.begin(), reversedWord.end());
    if(reversedWord == card)
    {
        return true;
    }

    for(int i=0; i<word.size()-1; i++)
    {
        swap(word[i], word[i+1]);
        if(word == card)
        {
            return true;
        }
        swap(word[i], word[i+1]);
    }



    return false;
}

int main()
{
    int nums;
    cin>>nums;
    for(int i=0; i<nums; i++)
    {
        string word;
        cin>>word;
        if(canTransform(word))
        {
            cout<<"YES"<<endl;
        }
        else
        {
            cout<<"NO"<<endl;
        }
    }
    return 0;
}
