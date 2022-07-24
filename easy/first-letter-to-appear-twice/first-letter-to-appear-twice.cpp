class Solution {
public:
    char repeatedCharacter(string s) {
        set<char> se;
        for (int i=0; i<size(s); ++i) {
            if (se.find(s[i])!=se.end()) return s[i];
            se.insert(s[i]);
        }
        return 'a';
    }
};
