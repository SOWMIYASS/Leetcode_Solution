//{ Driver Code Starts
// Initial Template for C++

#include <bits/stdc++.h>
using namespace std;

// } Driver Code Ends
// User function Template for C++

class Solution {
    public:
    int isTriangular(int N){
        int a=1;
        int i=2;
        while(a!=N && a<N){
            a=a+i;
            i++;
        }
        if(N==a) return 1;
        else return 0;
    }
};

//{ Driver Code Starts.

int main() {
    int t;
    cin >> t;
    while (t--) {
        int N;
        cin>>N;
        Solution ob;
        cout<<ob.isTriangular(N)<<"\n";
    }
}
// } Driver Code Ends