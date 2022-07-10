class Solution {
public:
    bool canChange(string start, string target) {
        int rs=0, ls=0, rt=0, lt=0;
        for (int i=0; i<size(start); ++i) {
            if (start[i]=='L')
                ls++;
            if (start[i]=='R')
                rs++;
            if (target[i]=='L')
                lt++;
            if (target[i]=='R')
                rt++;
        }
        if (ls!=lt||rs!=rt)
            return false;
        vector<int> st;
        for (int i=0; i<size(start); ++i) {
            if (start[i]=='L')
                st.push_back(1);
            else if (start[i]=='R')
                st.push_back(0);
        }
        vector<int> tr;
        for (int i=0; i<size(start); ++i) {
            if (target[i]=='L')
                tr.push_back(1);
            else if (target[i]=='R')
                tr.push_back(0);
        }
        if (st!=tr)
            return false;
        vector<int> stlloc;
        vector<int> strloc;
        vector<int> trrloc;
        vector<int> trlloc;
        for (int i=0; i<size(start); ++i) {
            if (start[i]=='L')
                stlloc.push_back(i);
            else if (start[i]=='R')
                strloc.push_back(i);
            if (target[i]=='L')
                trlloc.push_back(i);
            else if (target[i]=='R')
                trrloc.push_back(i);
        }
        for (int i=0; i<size(stlloc); ++i) {
            if (stlloc[i]<trlloc[i]) {
                return false;
            }
        }
        for (int i=0; i<size(trrloc); ++i) {
            if (strloc[i]>trrloc[i]) {
                return false;
            }
        }
        return true;
    }
};
