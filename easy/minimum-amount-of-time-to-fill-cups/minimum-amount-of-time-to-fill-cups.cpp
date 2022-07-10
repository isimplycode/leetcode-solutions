class Solution {
public:
    int fillCups(vector<int>& amount) {
        int res=0;
        while(true) {
            if (amount[0]==0&&amount[1]==0&&amount[2]==0) {
                break;
            }
            priority_queue<pair<int,int>> pq;
            pq.push({amount[0],0});
            pq.push({amount[1],1});
            pq.push({amount[2],2});
            int first=-1,second=-1;
            if (pq.top().first!=0) {
                first=pq.top().second;
            }
            pq.pop();
            if (pq.top().first!=0) {
                second=pq.top().second;
            }
            pq.pop();
            if (first!=-1) {
                amount[first]--;
            }
            if (second!=-1) {
                amount[second]--;
            }
            res++;
        }
        return res;
    }
};
