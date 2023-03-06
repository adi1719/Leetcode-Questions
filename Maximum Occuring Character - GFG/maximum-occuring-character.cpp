//{ Driver Code Starts
#include<bits/stdc++.h>
using namespace std;


// } Driver Code Ends


class Solution
{
    public:
    //Function to find the maximum occurring character in a string.
    char getMaxOccuringChar(string str)
    {
        int arr[26]= {0};
        
        for(int i=0; i<str.length(); i++)
        {
            // char tmp = str[i];
            int num = str[i] - 'a';
            arr[num ] = arr[num]+1;
        }
        int maxx = -1;
        int ans = -1;
        
        for(int j =0; j<26; j++)
        {
           
            if(arr[j]>maxx)
            {
                maxx = arr[j];
                ans =j;
            }
        }
        return ans+'a';
    }

};

//{ Driver Code Starts.

int main()
{
   
    int t;
    cin >> t;
    while(t--)
    {
        string str;
        cin >> str;
    	Solution obj;
        cout<< obj.getMaxOccuringChar(str)<<endl;
    }
}
// } Driver Code Ends