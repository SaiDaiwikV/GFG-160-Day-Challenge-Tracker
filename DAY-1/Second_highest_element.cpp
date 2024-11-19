// done by saidaiwik;

// DAY-1:

//{ Driver Code Starts
#include <bits/stdc++.h>

using namespace std;


// } Driver Code Ends
// User function template for C++
class Solution {
  public:
    // Function returns the second
    // largest elements
    int getSecondLargest(vector<int> &arr) {
        // Code Here;
        if(arr.size() < 2){
            return -1;
        }
        int l1 = -999,l2 = -999; // our asumption;
        for(int num : arr){
            if(num > l1){
                l2 = l1;
                l1 = num;
            }else if(num > l2 && num < l1){
                l2 = num;
            }
        }
        if(l2 == -999){
            return -1;
        }else{
            return l2;
        }
    }
};

//{ Driver Code Starts.

int main() {
    int t;
    cin >> t;
    cin.ignore();
    while (t--) {
        vector<int> arr;
        string input;
        getline(cin, input);
        stringstream ss(input);
        int number;
        while (ss >> number) {
            arr.push_back(number);
        }
        Solution ob;
        int ans = ob.getSecondLargest(arr);
        cout << ans << endl;
        cout << "~" << endl;
    }
    return 0;
}

// } Driver Code Ends