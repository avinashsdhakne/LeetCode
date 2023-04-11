//{ Driver Code Starts
// Initial Template for C++

#include <bits/stdc++.h>
using namespace std;

// } Driver Code Ends
// User function Template for C++

class Solution {
public:
    int solve(int a, int b, int c) {
        // code here
        vector<int> temp{a,b,c};
        sort(temp.rbegin(), temp.rend());
        // for(auto i: temp){
        //     cout<<i<<" ";
        // }
        int n = temp[2] + temp[1];
        if(temp[0] > ((2*n)+2)){
            return -1;
        }
        return accumulate(temp.begin(), temp.end(), 0);
    }
};

//{ Driver Code Starts.

int main() {
    int T;
    cin >> T;
    while (T--) {
        int a, b, c;
        cin >> a >> b >> c;

        Solution ob;
        int ans = ob.solve(a, b, c);
     

        cout <<  ans << "\n";
    }
    return 0;
}
// } Driver Code Ends