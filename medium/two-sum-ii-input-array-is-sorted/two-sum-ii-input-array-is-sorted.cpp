class Solution {
public:
    vector<int> twoSum(vector<int>& numbers, int target) {
        vector<int> v;
        int l=0, r=size(numbers)-1;
        while (l<r) {
            if (numbers[r]+numbers[l]==target) {
                v.push_back(l+1);
                v.push_back(r+1);
                break;
            } else if (numbers[r]+numbers[l]>target) {
                r--;
            } else {
                l++;
            }
        }
        return v;
    }
};
