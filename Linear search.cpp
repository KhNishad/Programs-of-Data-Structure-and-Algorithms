#include<bits/stdc++.h>
using namespace std;
int main()
{

    int i, n ,ar[13]={21,4,2,3,5,7,8,76,57,54,34,23,22} ;
    cout<<"Enter the number to find :"<<endl;
    cin>>n;
    for(i=0;i<14;i++)
    {
        if(ar[i]==n)
        {

            cout<<"Element number "<<++i<<endl;
            return 0;
        }

    }
    cout<<"number not found"<<endl;
    return 0;

}
