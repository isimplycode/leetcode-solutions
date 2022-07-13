class Solution {
public:
    int lastStoneWeight(vector<int>& stones) {
        priority_queue<int> pq;
        for (int i=0; i<size(stones); ++i)
            pq.push(stones[i]);
        int f,s;
        while (pq.size()>1) {
            f=pq.top();
            pq.pop();
            s=pq.top();
            pq.pop();
            if(abs(f-s))
                pq.push(abs(f-s));
        }
        return pq.size()==0 ? 0 : pq.top();
    }
};
