class Solution {
public:
    int carFleet(int target, vector<int>& position, vector<int>& speed) {
        vector<pair<int,int>> pos; 
        for (int i=0; i<size(position); ++i) {
            pos.push_back({position[i],speed[i]});
        }
        sort(pos.begin(),pos.end(),greater<>());
        stack<double> st;
        for (int i=0; i<size(position); ++i) {
            double curr=(double)(target-pos[i].first)/pos[i].second;
            if (st.size()) {
                while (st.top()>=curr) {
                    curr=st.top();
                    st.pop();
                    if (!st.size()) break;
                }
            }
            st.push(curr);
        }
        return size(st);
    }
};
