class Solution {
public:
    string longestCommonPrefix(vector<string>& strs) {

        if (strs.size()==0){
            return "";
        }

        sort(strs.begin(),strs.end());
        string first=strs[0];
        string last = strs[strs.size()-1];

        string ans="";
        

        for(int i=0;i<first.length() && i<last.length() ; i++){

            if(first[i]==last[i]){
                ans+=first[i];
            }

            else{
                break;
            }

  
        }
        return ans;
    }
};