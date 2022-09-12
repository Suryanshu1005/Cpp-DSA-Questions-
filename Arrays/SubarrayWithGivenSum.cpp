#include <bits/stdc++.h>
using namespace std;


class Solution{
    public: 
    vector<int> subarraySum(int arr[], int n, long long s)
    {
        // Your code here
        long long sum = 0;
        int p=0;
        for(int i=0;i<n;i++){
            if(s==0) return {-1};
            sum += arr[i];
            while(sum > s){
                sum -= arr[p];
                p++;
            }
            if(sum == s){
                return {p+1, i+1};
            }
        }
        return {-1};
    }
};

int main(){
    int t;
    cin>>t;
    while(t--){
        int n;
        long long s;
        cin>>n>>s;
        int arr[n];
        const int max = 1e9;
        for (int i = 0; i < n; i++)
        {
            cin>>arr[i];
        }

        Solution ob;
        vector<int>res;
        res = ob.subarraySum(arr,n,s);
        for (int i = 0; i < res.size(); i++)
        {
            cout<<res[i]<<" ";
        }
        cout<<endl;
        
        
    }
    return 0;
}
