/*
 * @lc app=leetcode.cn id=144 lang=cpp
 * @lcpr version=30204
 *
 * [144] 二叉树的前序遍历
 */

// @lcpr-template-start
using namespace std;
#include <algorithm>
#include <array>
#include <bitset>
#include <climits>
#include <deque>
#include <functional>
#include <iostream>
#include <list>
#include <queue>
#include <stack>
#include <tuple>
#include <unordered_map>
#include <unordered_set>
#include <utility>
#include <vector>
// @lcpr-template-end
// @lc code=start
/**
 * Definition for a binary tree node.
 * struct TreeNode {
 *     int val;
 *     TreeNode *left;
 *     TreeNode *right;
 *     TreeNode() : val(0), left(nullptr), right(nullptr) {}
 *     TreeNode(int x) : val(x), left(nullptr), right(nullptr) {}
 *     TreeNode(int x, TreeNode *left, TreeNode *right) : val(x), left(left), right(right) {}
 * };
 */
class Solution
{
public:
    class Solution
    {
    public:
        vector<int> preorderTraversal(TreeNode *root)
        {
            vector<int> vet;
            stack<TreeNode *> st;
            while (root || !st.empty())
            {
                if (root)
                {
                    st.push(root);
                    vet.push_back(root->val);
                    root = root->left;
                }
                else
                {
                    root = st.top();
                    st.pop();
                    root = root->right;
                }
            }
            return vet;
        }
    };
};
// @lc code=end

/*
// @lcpr case=start
// [1,null,2,3]\n
// @lcpr case=end

// @lcpr case=start
// [1,2,3,4,5,null,8,null,null,6,7,9]\n
// @lcpr case=end

// @lcpr case=start
// []\n
// @lcpr case=end

// @lcpr case=start
// [1]\n
// @lcpr case=end

 */
