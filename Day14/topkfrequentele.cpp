class Solution {
public:
    vector<int> topKFrequent(vector<int>& nums, int k) {

        unordered_map<int, int> freq;
        for(int num : nums){
            freq[num]++;

        }

        vector<pair<int , int>> freqvec;
        for (auto vec: freq){
            freqvec.push_back({vec.second,vec.first});

        }
        sort(freqvec.rbegin(),freqvec.rend());
        vector<int> result;
        for(int i=0;i<k;i++){
            result.push_back({freqvec[i].second});
        }

        return result;
    }
};