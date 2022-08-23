class Solution {
public:
    bool isPalindrome(ListNode* head) {
        vector<int> res;
        while (head) {
            res.push_back(head->val);
            head=head->next;
        }
        vector<int> temp=res;
        reverse(begin(temp),end(temp));
        if (res==temp) {
            return true;
        }
        return false;
    }
};
