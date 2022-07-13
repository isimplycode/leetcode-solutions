class KthLargest {
public:
    priority_queue<int,vector<int>,greater<int>> pq;
    int K=0;
    KthLargest(int k, vector<int>& nums) {
        K=k;
        for (int i=0; i<size(nums); ++i) {
            pq.push(nums[i]);
        }
        while (size(pq)>k) {
            pq.pop();
        }
    }
    
    int add(int val) {
        pq.push(val);
        if (pq.size()>K)
            pq.pop();
        return pq.top();
    }
};
