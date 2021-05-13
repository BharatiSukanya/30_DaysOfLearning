//Sort an array of 0s, 1s and 2s

#include<bits/stdc++.h>
using namespace std;

int  main()
{
    int n,i;
    int *arr = new int(n);
    int low =0, mid = 0;
    
    cin>>n;
    for(i=0;i<n;i++)
    cin>>arr[i];
    
    int high = n-1;
    
    for(int i=0;i<n;i++)
    {   
        while(mid<=high)
        {
           if(arr[mid]==0)
           {
               swap(arr[mid],arr[low]);
               mid++;
               low++;
               break;
           }
           
           if(arr[mid]==1)
           {
               mid++;
               break;
           }
           
           if(arr[mid]==2)
           {
               swap(arr[mid],arr[high]);
               high--;
               break;
           }
        }
    }
    
    for(int i=0;i<n;i++)
    cout<<arr[i]<<" ";
    
    return 0;
}