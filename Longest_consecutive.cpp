#include <bits/stdc++.h>
using namespace std;

int longestConsecutive(vector<int>& nums) {
    if(nums.size() == 0) return 0;
    else if(nums.size() == 1) return 1;
    sort(nums.begin(), nums.end());
    int cnt = 1;
    int longest = 0;
    for(int i = 0; i < nums.size()-1; i++) {
        if(nums[i+1] == nums[i]+1) {
            cnt += 1;
            longest = max(cnt, longest);
        }
        else if(nums[i+1] == nums[i]) {
            longest = max(cnt, longest);
            continue;
        }
        else cnt = 1;
    }
    return longest;
}

int main() {
    int n;
    cin >> n;
    vector<int> arr(n);
    for(int i = 0; i < n; i++) cin >> arr[i];

    cout << "Longest Consecutive Sequence of integers: " << longestConsecutive(arr);

    return 0;
}