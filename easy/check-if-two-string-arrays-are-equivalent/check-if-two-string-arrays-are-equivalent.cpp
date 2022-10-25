class Solution {
public:
    bool arrayStringsAreEqual(vector<string>& word1, vector<string>& word2) {
        string s="",t="";
        for (int i=0; i<size(word1); ++i) {
            s+=word1[i];
        }
        for (int i=0; i<size(word2); ++i) {
            t+=word2[i];
        }
        return s==t;
    }
};
