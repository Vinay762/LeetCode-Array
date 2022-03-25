#include <bits/stdc++.h>
using namespace std;

vector<int> solve(vector<vector<int>> nums)
{
    unordered_map<int, int> mp;
    int count = nums.size();
    int shortestArray = 0, shortestSize = nums[0].size();
    vector<int> ans;
    for (int i = 0; i < count; i++)
    {
        vector<int> temp = nums[i];
        if (temp.size() < shortestSize)
        {
            shortestSize = temp.size();
            shortestArray = i;
        }
        for (int num : temp)
            mp[num]++;
    }
    vector<int> hello = nums[shortestArray];
    for (int num : hello)
    {
        if (mp[num] == count)
            ans.push_back(num);
    }
    return ans;
}

int main()
{
    ios::sync_with_stdio(0);
    cin.tie(0);
    // [[2,3,6,8],
    //              [1,2,3,5,6,7,10],
    //              [2,3,4,6,9]]
    vector<vector<int>> nums = {{2, 3, 6, 8}, {1, 2, 3, 5, 6, 7, 10}, {2, 3, 4, 6, 9}};
    vector<int> ans = solve(nums);
    for (int i = 0; i < ans.size(); i++)
        cout << ans[i] << ' ';
    cout << endl;
    return 0;
}