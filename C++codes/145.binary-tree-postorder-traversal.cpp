/*
 * @lc app=leetcode.cn id=145 lang=cpp
 * @lcpr version=30204
 *
 * [145] 二叉树的后序遍历
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
    vector<int> postorderTraversal(TreeNode *root)
    {
        // 双栈法
        // 根 右 左
        // 左 右 根
        // vector<int> vet;
        // if (!root)
        //     return vet;
        // stack<TreeNode*> st, st_sec;
        // st.push(root);
        // while (!st.empty()) {
        //     root = st.top();
        //     st.pop();
        //     st_sec.push(root);

        //     if (root->left) {
        //         st.push(root->left);
        //     }
        //     if (root->right) {
        //         st.push(root->right);
        //     }
        // }
        // while (!st_sec.empty()) {
        //     vet.push_back(st_sec.top()->val);
        //     st_sec.pop();
        // }
        // return vet;

        //
        vector<int> vet;
        if (!root)
            return vet;
        stack<TreeNode *> st;
        TreeNode *prev;
        while (root || !st.empty())
        {
            while (root)
            {
                st.push(root);
                root = root->left;
            }

            root = st.top();
            // 判断右子树；不存在/被访问过了

            if (!root->right || root->right == prev)
            {
                // 访问当前
                // root = st.top();
                vet.push_back(root->val);
                st.pop();
                prev = root;
                root = nullptr;
            }
            else
            {
                // 访问右子树
                root = root->right;
            }
        }
        return vet;
    }
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
