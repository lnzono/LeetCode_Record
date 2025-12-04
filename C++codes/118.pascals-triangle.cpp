class Solution
{
public:
    vector<vector<int>> generate(int numRows)
    {
        vector<vector<int>> vet;
        vector<int> cur; // 当前数组，传给二阶数组
        vector<int> pre; // 上一层数组

        // 阶乘
        //  二项式乘积
        for (int i = 0; i < numRows; i++)
        {
            for (int j = 0; j <= i; j++)
            {
                // 考虑竖溜和斜溜
                if (j == i || j == 0)
                {
                    cur.push_back(1);
                }
                else
                {
                    cur.push_back(pre[j] + pre[j - 1]);
                }
            }
            vet.push_back(cur);
            pre = cur;
            cur.clear();
        }
        return vet;
    }
};