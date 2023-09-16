//{ Driver Code Starts
#include <bits/stdc++.h>
using namespace std;

// } Driver Code Ends

class Solution
{
    public:
    //Function to count the number of ways in which frog can reach the top.
    long long countWays(int n)
    {
        
        if(n < 3) return n;
        if(n == 3) return 4;
        
        long long first = 1;
        long long second = 2;
        long long third = 4;
        long long curr;
        
        for(int i=4; i<=n; i++){
            curr = (first + second + third) % 1000000007;
            
            first = second;
            second = third;
            third = curr;
        }
        
        return curr;
    }
};


//{ Driver Code Starts.
int main()
{
    //taking testcases
	int t;
	cin >> t;
	
	while(t--)
	{
	    //taking number of steps in stair
		int n;
		cin>>n;
		Solution ob;
		//calling function countWays()
		cout << ob.countWays(n) << endl;
	}
    
    return 0;
    
}

// } Driver Code Ends