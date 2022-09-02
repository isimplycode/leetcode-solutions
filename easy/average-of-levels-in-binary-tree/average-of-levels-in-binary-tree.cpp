class Solution {
public:
    vector<double> averageOfLevels(TreeNode* root) {
        if (!root) return {};
        vector<double> res;
        queue<TreeNode*> q;
        q.push(root);
        while (q.size()) {
            int tmp=q.size();
            long long ans=0;
            for (int i=0; i<tmp; ++i) {
                ans+=q.front()->val;
                if (q.front()->right) {
                    q.push(q.front()->right);
                }
                if (q.front()->left) {
                    q.push(q.front()->left);
                }
                q.pop();
            }
            res.push_back((double)ans/tmp);
        }
        return res;
    }
};
