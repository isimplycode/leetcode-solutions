class Solution {
public:
    int minDeletions(string s) {
        unordered_map<char,int> m;
        for (int i=0; i<size(s); ++i) {
            if (m.find(s[i])==m.end()) {
                m[s[i]]=1;
            } else {
                m[s[i]]++;
            }
        }
        multiset<int,greater<int>> set;
        for (auto i : m) {
            set.insert(i.second);
        }
        unordered_set<int> res;
        int count=0;
        for (auto& i : set) {
            int j=i;
            while (res.find(j)!=res.end()&&j!=0) {
                j--;
                count++;
            }
            res.insert(j);
        }
        return count;
    }
};
