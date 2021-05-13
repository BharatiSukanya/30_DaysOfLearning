Given a positive integer N, find the smallest number of steps it will take to reach 1.

There are two kinds of permitted steps:

You may decrement N to N - 1.
If a * b = N, you may decrement N to the larger of a and b.
For example, given 100, you can reach 1 in five steps with the following route: 100 -> 10 -> 9 -> 3 -> 2 -> 1.

#include<bits/stdc++.h>
using namespace std;

int main()
{
    int n, count =0;
    cin>>n;
    while(n!=1)
    {
        if (ceil((double)sqrt(n)) == floor((double)sqrt(n)))
        {
            n = sqrt(n);
        }
        else
        n--;
        count++;
    }
    cout<<count<<"\n";
    return 0;
}