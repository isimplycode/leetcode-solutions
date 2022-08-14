class Solution {
public:
    string smallestNumber(string pattern) {
        vector<int> nums;
        for (int i=0; i<size(pattern)+1; ++i) {
            nums.push_back(i+1);
        }
        do {
            string res="";
            for (int i=0; i<size(nums); ++i) {
                res+=to_string(nums[i]);
            }
            bool isval=true;
            for (int i=1; i<size(nums); ++i) {
                if (pattern[i-1]=='I') {
                    if (nums[i]<nums[i-1]) {
                        isval=false;
                        break;
                    }
                } else {
                    if (nums[i]>nums[i-1]) {
                        isval=false;
                        break;
                    }
                }
            }
            if (isval) return res;
        } while (next_permutation(begin(nums),end(nums)));
        return "";
    }
};
