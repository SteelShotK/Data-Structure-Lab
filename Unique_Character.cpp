class Solution {
    public:
        int firstUniqChar(string s) {
            unordered_map<char, int> mp;
    
            // Step 1: Count frequency of each character
            for (char c : s) {
                mp[c]++;
            }
    
            // Step 2: Find the first character with frequency 1 in order of appearance
            for (int i = 0; i < s.size(); i++) {
                if (mp[s[i]] == 1) return i;
            }
    
            return -1;
        }
    };