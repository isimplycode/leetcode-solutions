class Solution {
public:
    int minSetSize(vector<int>& arr) {
        int ss=size(arr)/2;
        unordered_map<int,int> m;
        for (int i=0; i<ss*2; ++i)
            m[arr[i]]++;
        priority_queue<int> pq;
        for (auto i : m)
            pq.push(i.second);
        int res=0,tmp=size(arr);
        while (tmp>ss) {
            res++;
            tmp-=pq.top();
            pq.pop();
        }
        return res;
    }
};
