#include<bits/stdc++.h>
using namespace std;

class Solution{
    public:
    // arr: input array
    // n: size of array
    //Function to sort the array into a wave-like array.
    void convertToWave(int n, vector<int>& arr){
        for(int i=0;i<n-1;i=i+2){                           //starting se har index of swap krne ke baad i ko 2 steps aage badha do.
            swap(arr[i],arr[i+1]);
        }
        
    }
};

int main()
{
    int t,n;
    cin>>t;
    while(t--)
    {
        cin>>n;
        vector<int> a(n); 
        for(int i=0;i<n;i++)
            cin>>a[i]; 
        Solution ob;
        ob.convertToWave(n, a);

        for(int i=0;i<n;i++)
            cout<<a[i]<<" "; 
            
        cout<<endl;
    }
}