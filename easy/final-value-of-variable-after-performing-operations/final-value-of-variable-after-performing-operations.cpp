class Solution {
public:
    int finalValueAfterOperations(vector<string>& operations) {
        int res=0;
        for (int i=0; i<size(operations); ++i) {
            if (operations[i]=="--X"||operations[i]=="X--") res--;
            else res++;
        }
        return res;
    }
};
