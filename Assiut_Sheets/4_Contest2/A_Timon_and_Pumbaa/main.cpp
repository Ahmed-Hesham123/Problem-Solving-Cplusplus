    #include <iostream>
     
    using namespace std;
     
    int main()
    {
        int a,b, sum;
        cin>>a>>b;
        sum=a-b;
        if(sum>=0){
            sum=sum;
        }else{
            sum=0;
        }
        cout<<sum<<endl;
        return 0;
    }