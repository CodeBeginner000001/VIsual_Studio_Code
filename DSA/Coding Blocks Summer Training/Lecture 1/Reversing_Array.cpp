#include<iostream>
using namespace std;
int main()
{
    int n,a[100];
    
    cout<<"Enter the size of array:";
    cin>>n;
    for (int i=0;i<n;i++)
    {
        cin>>a[i];
    }
    int i=0 ,j=n-1 ;
    while(i<j)
    {
       swap(a[i],a[j]);
       i++;
       j--;
    }
     for (i=0;i<n;i++)
    {
        cout<<a[i]<<" ";
    }
}
