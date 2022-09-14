//{ Driver Code Starts
#include <bits/stdc++.h>
using namespace std;

// } Driver Code Ends
class Solution{
  public:
    vector<int> duplicates(int arr[], int n) {
        // code here
        int a[n] = {0};                     //initalizing another array a with all the element initally at 0
        vector<int>v;
        for(int i=0;i<n;i++){
            a[arr[i]]++;                    //making the new array of size the given array
        }
        for(int i = 0;i<n;i++){
            if(a[i]>1) v.push_back(i);       
        }
        if(v.size()==0) v.push_back(-1);
        return v;
    }
};


//{ Driver Code Starts.
int main() {
    int t;
    cin >> t;
    while (t-- > 0) {
        int n;
        cin >> n;
        int a[n];
        for (int i = 0; i < n; i++) cin >> a[i];
        Solution obj;
        vector<int> ans = obj.duplicates(a, n);
        for (int i : ans) cout << i << ' ';
        cout << endl;
    }
    return 0;
}

// } Driver Code Ends