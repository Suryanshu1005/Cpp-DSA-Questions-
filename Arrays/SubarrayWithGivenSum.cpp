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
            if(s==0) return {-1};              //agar sum ki value zero hai to -1 return kar denge
            sum += arr[i];                     //nhi toh array ka sum krke sum me store kr lenge
            while(sum > s){                    //jab tak sum s se bada hai tb tk loop chalao
                sum -= arr[p];                 //aur har baar sum mese arr[p] ko subtract kr do
                p++;
            }
            if(sum == s){                       //jaise hi sum == s ho jaye
                return {p+1, i+1};              //values ko return kr do
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
