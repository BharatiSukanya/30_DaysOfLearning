Given a string, find the length of the smallest window that contains every distinct character. Characters may appear more than once in the window.

For example, given "jiujitsu", you should return 5, corresponding to the final five letters.


#include<bits/stdc++.h>
using namespace std;
#define Range 128

string distinct_element_window(string str,int n)
{
    vector<bool> window(Range);   // vector to keep track of alphabets in the string
    int begin =0, end =0;        //to store range of longest substribg boundaries
    for(int low=0,high=0;high<n;high++) //to keep range of the window size
    {
        if(window[str[high]]) //if char is already present 
        {
            while(str[low]!=str[high]) //remove char from left side until we encounter the current charactter
            {
                window[str[low++]]=false;
            }
            low++; //remove the current char
        }
    else
    {
        window[str[high]]=true;  //if char is not present , then mark it 
        if(end-begin<high-low)  //update the maximum window size
        {
            begin = low;
            end=high;
        }
      }
    }
    return str.substr(begin,end-begin+1); //substr function to return the substring 
}

int main()
{
    string str;
    int n;
    cin>>str;
    n = str.length();                    //length of the string
    string ans = distinct_element_window(str,n);
    cout<<ans.length();                //print length of the substring with all distinct elements
    return 0;
}
