class Solution {
public:
    int lengthOfLongestSubstring(string s) {
        unordered_set<char> chars;

        int left=0;
        int right=0;
        int maxlen=0;

        while(right<s.size()){
            if (chars.find(s[right]) == chars.end()){
                chars.insert(s[right]);
                maxlen=max(maxlen,right-left+1);
                right++;
            }
            else{
                chars.erase(s[left]);
                left++;
            }
        }
        return maxlen;
        
    }
};
