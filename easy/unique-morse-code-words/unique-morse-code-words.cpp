class Solution {
public:
    int uniqueMorseRepresentations(vector<string>& words) {
        vector<string> morse={".-","-...","-.-.","-..",".","..-.","--.","....","..",".---","-.-",".-..","--","-.","---",".--.","--.-",".-.","...","-","..-","...-",".--","-..-","-.--","--.."};
        unordered_set<string> s;
        for (int i=0; i<size(words); ++i) {
            string temp="";
            for (auto c : words[i]) {
                temp+=morse[c-'a'];
            }
            s.insert(temp);
        }
        return s.size();
    }
};
