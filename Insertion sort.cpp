#include<bits/stdc++.h>
using namespace std;
int main ()
{
    int n;
    cout<<"Enter the number of elements :"<<endl;
    cin>>n;
    int ar[n];
    for(int i=0;i<n;i++)
    {
        cin>>ar[i];

    }
    int siz ,i, j, temp;
    siz  = sizeof(ar)/sizeof(ar[0]);
    for(i=1;i<=siz;i++)
    {
      temp = ar[i];
      j= i-1;
      while(j>=0 && ar[j]>temp)
      {
          ar[j+1]=ar[j];
          j--;
      }
      ar[j+1] = temp;
    }
    cout<<"Sorted Data:"<<endl;
    for(i=0;i<siz;i++)
    {
        cout<<ar[i]<<endl;
    }
    return 0;
}
