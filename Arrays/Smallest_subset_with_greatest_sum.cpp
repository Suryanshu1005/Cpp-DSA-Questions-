//{ Driver Code Starts
//Initial Template for C++

#include<bits/stdc++.h>
using namespace std;

// } Driver Code Ends
//User function Template for C++

class Solution{
    public:
    int minSubset(vector<int> &Arr,int N){
        sort(Arr.begin(), Arr.end());    //sort the array 
        int ans = 0;                //where we store our total number of elements
        long long sum1 = 0;         //to store the sum of the array
        long long sum2 = 0;         //store the sum of the greatest subset
        for(int i=0;i<N;i++){
            sum1 = sum1+Arr[i];
        }
        int j = N-1;                //putting j pointer at the end
        while(true){
            sum2 += Arr[j];         //adding the element from the end 
            sum1 -= Arr[j];         //removing the element from the overall sum of the array
            j--;
            ans++;
            if(sum2>sum1) break;
        }
        return ans;
    }
};

//{ Driver Code Starts.
int main(){
    int t;
    cin>>t;
    while(t--){
        int N;
        cin>>N;
        vector<int> Arr(N);
        for(int i=0;i<N;i++){
            cin>>Arr[i];
        }
        Solution ob;
        cout<<ob.minSubset(Arr,N)<<endl;
    }
    return 0;
}
// } Driver Code Ends