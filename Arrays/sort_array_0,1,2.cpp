//{ Driver Code Starts
#include<bits/stdc++.h>
using namespace std;



//USING another arr. and it's also aplicable for larger array
class Solution
{
    public:
    void sort012(int a[], int n)
    {
        int arr[3]={0};
        for(int i=0;i<n;i++)//to count the frequency of 0,1,2 
        {
            arr[a[i]]++;
        }
        int j=0;
       for(int i=0;i<3;i++)
       {
           if(arr[i]!=0)
           {
               while(arr[i]!=0)//descreasing the frequency of each num
               {
                   a[j]=i;
                   j++;
                   arr[i]--;
               }
           }
       }
    } 
};

//USING DUTCH NATIONAL FLAG ALGO

/*int low = 0;
        int mid = 0;
        int high = n-1;
        while(mid<=high){
            if(a[mid]==0){
                 swap(a[low], a[mid]);
                 mid++;
                 low++;}
            if(a[mid]==1){
                mid++;
            }
            if(a[mid]==2){
                swap(a[mid],a[high]);
                high--;
            }
        }
    }*/

//{ Driver Code Starts.
int main() {

    int t;
    cin >> t;

    while(t--){
        int n;
        cin >>n;
        int a[n];
        for(int i=0;i<n;i++){
            cin >> a[i];
        }

        Solution ob;
        ob.sort012(a, n);

        for(int i=0;i<n;i++){
            cout << a[i]  << " ";
        }

        cout << endl;
        
        
    }
    return 0;
}


// } Driver Code Ends