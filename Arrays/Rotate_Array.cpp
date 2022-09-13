#include<bits/stdc++.h>
using namespace std;

class Solution{
    public:
    
    //Function to rotate an array by d elements in counter-clockwise direction. 
    void rev(int arr[], int low, int high){
        while(low < high){                                //jb tak low high se chota rhega tb tak loop chalega
            swap(arr[low], arr[high]);
            low++;
            high--;
        }
    }
    void rotateArr(int arr[], int d, int n){
        int k = d%n;                                      //if number of swaps are greater than the number of elements in the array
                                                           // we will only use the remaining step i.e. d = 10; n = 7; 
        rev(arr,0,n-1);
        rev(arr,0,n-k-1);
        rev(arr,n-k,n-1);
    }
};


int main() {
	int t;
	cin >> t;
	
	while(t--){
	    int n, d;
	    cin >> n >> d;
	    
	    int arr[n];
	    for(int i = 0; i < n; i++){
	        cin >> arr[i];
	    }
	    Solution ob;
	    ob.rotateArr(arr, d,n);
	    for(int i =0;i<n;i++){
	        cout << arr[i] << " ";
	    }
	    cout << endl;
	}
	return 0;
}