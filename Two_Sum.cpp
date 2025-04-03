#include <bits/stdc++.h>
using namespace std;

vector<int> twoSum(vector<int>& arr, int target) {
    int n = arr.size();
    map<int, int> mpp;
    for(int i = 0; i < n; i++) {
        int leftover = target-arr[i];
        if(mpp.find(leftover) != mpp.end()) return {mpp[leftover], i};
        mpp[arr[i]] = i;
    }
    return{};
}

int main() {
    int n, target;
    cin >> n >> target;
    vector<int> arr(n);
    for(int i = 0; i < n; i++) cin >> arr[i];
    
    vector<int> answer = twoSum(arr, target);

    for(auto it : answer) cout << it << " ";

    return 0;
}