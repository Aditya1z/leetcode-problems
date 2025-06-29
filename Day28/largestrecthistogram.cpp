class Solution {
public:
    int largestRectangleArea(vector<int>& heights) {
        stack<int> st;

        int maxarea=0;
        int n = heights.size();

        for(int i=0;i<=n;i++){
            int currentheight;
            if(i==n){
                currentheight=0;
            }
            else{
                currentheight=heights[i];
            }
            while(!st.empty() && currentheight < heights[st.top()]){

                int height=heights[st.top()];
                st.pop();

                int width;

                if(st.empty()){
                    width=i;
                }
                else{
                    width=i-st.top()-1;
                }

                int area = height*width;
                if(area>maxarea){
                    maxarea=area;
                }


            }
            st.push(i);
        }

        return maxarea;
        
    }
};
