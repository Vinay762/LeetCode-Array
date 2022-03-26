#include <bits/stdc++.h>
using namespace std;

bool binarySearch(vector<int> &nums, int target)
{
    int low = 0;
    int high = nums.size() - 1;
    while (low <= high)
    {
        int mid = low + (high - low) / 2;
        if (nums[mid] == target)
            return true;
        else if (nums[mid] > target)
        {
            high = mid - 1;
        }
        else
        {
            low = mid + 1;
        }
    }
    return false;
}

int smallestCommonElement(vector<vector<int>> &mat)
{
    int m = mat.size();
    int n = mat[0].size();
    for (int j = 0; j < n; j++)
    {
        int minCommon = mat[0][j];
        int i = 1;
        for (; i < m; i++)
        {
            if (binarySearch(mat[i], minCommon))
            {
                continue;
            }
            else
            {
                break;
            }
        }
        if (i == m)
            return minCommon;
    }
    return -1;
}

int main()
{
    //[[1,2,3,4,5],[2,4,5,8,10],[3,5,7,9,11],[1,3,5,7,9]]
    vector<vector<int>> mat = {{1, 2, 3, 4, 5}, {2, 4, 5, 8, 10}, {3, 5, 7, 9, 11}, {1, 3, 5, 7, 9}};
    int ans = smallestCommonElement(mat);
    cout << ans << endl;
    return 0;
}