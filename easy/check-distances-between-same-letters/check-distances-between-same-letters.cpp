class Solution {
public:
    bool checkDistances(string s, vector<int>& distance) {
        unordered_map<char,int> seen;
        vector<int> v(26,0);
        for (int i=0; i<size(s); ++i) {
            if (seen.find(s[i])!=seen.end()) {
                v[s[i]-'a']=i-seen[s[i]]-1;
            }
            seen[s[i]]=i;
        }
        for (int i=0; i<26; ++i) {
            if (distance[i]!=v[i]&&seen.find((char)i+'a')!=seen.end()) return false;
        }
        return true;
    }
};
