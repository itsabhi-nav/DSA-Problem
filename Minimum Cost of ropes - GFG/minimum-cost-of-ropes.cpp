//{ Driver Code Starts
#include <bits/stdc++.h>
using namespace std;


// } Driver Code Ends
class Solution
{
    public:
    //Function to return the minimum cost of connecting the ropes.
    long long minCost(long long arr[], long long n) {
        // Your code here 
        long long cost =0;
        priority_queue<long long, vector<long long>, greater<long long>>p;
        for(long long i =0; i<n;i++)
        p.push(arr[i]);
        
        long long first, second;
        while(p.size() !=1){
            first = p.top();
            p.pop();
            second = p.top();
            p.pop();
            first += second;
            cost += first;
            p.push(first);
        }
        return cost;
    }
};


//{ Driver Code Starts.

int main() {
    long long t;
    cin >> t;
    while (t--) {
        long long n;
        cin >> n;
        long long i, a[n];
        for (i = 0; i < n; i++) {
            cin >> a[i];
        }
        Solution ob;
        cout << ob.minCost(a, n) << endl;
    }
    return 0;
}

// } Driver Code Ends