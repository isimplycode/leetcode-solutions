class Solution {
public:
    int edgeScore(vector<int>& edges) {
        unordered_map<long long,long long> score;
        for (int i=0; i<size(edges); ++i) {
            score[edges[i]]+=i;
        }
        priority_queue<pair<long long,long long>> pq;
        for (auto i : score) {
            pq.push({i.second,-i.first});
        }
        return -pq.top().second;
    }
};
