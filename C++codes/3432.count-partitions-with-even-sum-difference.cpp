// @lcpr-before-debug-begin

// @lcpr-before-debug-end

/*
 * @lc app=leetcode.cn id=3432 lang=cpp
 * @lcpr version=30204
 *
 * [3432] 统计元素和差值为偶数的分区方案
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
class Solution
{
public:
    int countPartitions(vector<int> &nums)
    {
        int count = 0;
        for (auto num : nums)
        {
            if (num % 2)
            {
                count++;
            }
        }

        if (count % 2)
        {
            return 0;
        }
        else
        {
            return nums.size() - 1;
        }
    }
};
// @lc code=end

// @lcpr-div-debug-arg-start
// funName=countPartittions
// paramTypes= ["number[]"]
// @lcpr-div-debug-arg-end

/*
// @lcpr case=start
// [10,10,3,7,6]\n
// @lcpr case=end

// @lcpr case=start
// [1,2,2]\n
// @lcpr case=end

// @lcpr case=start
// [2,4,6,8]\n
// @lcpr case=end

 */
