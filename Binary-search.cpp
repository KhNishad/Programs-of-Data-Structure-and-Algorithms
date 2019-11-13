#include<bits/stdc++.h>
using namespace std;
int main()
{
    int i , n=11,x , ar[11]={1,2,3,4,43,45,89,90,94,98,99};
    int left , right, mid;
    cout<<"Enter the Number to find:"<<endl;
    cin>>x;
    left=0;
    right = n-1;

    while(left<=right)
    {
        mid= left+(right-left)/2;

        if(ar[mid]==x)
        {
            cout<<"Element At "<<mid<<" Possition"<<endl;
            return 0;
        }
        if(ar[mid]<x)
        {
            left = mid+1;
        }
        else{
            right = mid-1;
        }
    }
    cout<<"Number not found"<<endl;
    return 0;
}
