//Sort an array of 0s, 1s and 2s

#include<bits/stdc++.h>
using namespace std;

int  main()
{
    int n,i;
    int *arr = new int(n);
    int c0 = 0, c1=0,c2=0;
    cin>>n;
    for(i=0;i<n;i++)
    cin>>arr[i];
    for(i=0;i<n;i++)
    {
        if(arr[i]==0)
        c0++;
        
        else if(arr[i]==1)
        c1++;
        
        else
        c2++;
    }
    while (c0--) {
        cout<<"0"<<" ";
    }
    
    while (c1--) {
        cout<<"1"<<" ";
    }
    
    while (c2--) {
        cout<<"2"<<" ";
    }
    
    
    return 0;
}