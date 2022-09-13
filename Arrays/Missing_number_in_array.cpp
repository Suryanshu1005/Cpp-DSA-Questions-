#include <bits/stdc++.h>
using namespace std;


class Solution{
  public:
    int MissingNumber(vector<int>& array, int n) {
        int k = (n*(n+1))/2;                    //sum of all n natural numbers
        int sum = 0;                            //setting initial value of sum = 0
        for(int i = 0;i<array.size();i++){      //we need to keep in mind that array ka size n nhi hai.. array ka size n-1 hai
            sum += array[i];                    //har iteration pr array ke sum ko sum variable me store kr lenge
        }
        return k-sum;                       //this will give us the value of the element that is missing in our array
    }
};


int main() {
    int t;
    cin >> t;
    while (t--) {
        int n;
        cin >> n;

        vector<int> array(n - 1);
        for (int i = 0; i < n - 1; ++i) cin >> array[i];
        Solution obj;
        cout << obj.MissingNumber(array, n) << "\n";
    }
    return 0;
}