// { Driver Code Starts

#include<bits/stdc++.h>

using namespace std;


 // } Driver Code Ends
//User function template for C++
class Solution{
public:	
	/* if x is present in arr[] then returns the count
		of occurrences of x, otherwise returns 0. */
	int numberSearch(int arr[], int low, int high, int x) {
	    if(low>high) return -1;
	    int mid = (low+high)/2;
	    if(arr[mid] == x) {
	        return mid;
	    }
	    else if(arr[mid]>x){
	        return numberSearch(arr, low, mid-1, x);
	    }
	    else return numberSearch(arr, mid+1, high, x);
	    
	}
	
	int count(int arr[], int n, int x) {
	    // code here
	    int ans = numberSearch(arr, 0, n-1, x);
	    if(ans == -1) return 0;
	    
	    int count = 1;
	    int left = ans - 1;
	    while(left>=0 && arr[left] == x){
	        count++, left--;
	    }
	    int right = ans + 1;
	    while(right<n && arr[right] == x){
	        count++; right++;
	    }
	    return count;
	}
};

// { Driver Code Starts.

int main() {
    int t;
    cin >> t;
    while (t--) {
        int n, x;
        cin >> n >> x;
        int arr[n];
        for (int i = 0; i < n; i++) {
            cin >> arr[i];
        }
        Solution ob;
        auto ans = ob.count(arr, n, x);
        cout << ans << "\n";
    }
    return 0;
}
  // } Driver Code Ends