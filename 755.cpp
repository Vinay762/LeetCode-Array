#include <bits/stdc++.h>
using namespace std;

vector<int> pourWater(vector<int> &heights, int water, int pos)
{
    while (water > 0)
    {
        water--;
        int left = pos;
        while (left > 0 && heights[left - 1] <= heights[left])
            left--;

        if (heights[left] < heights[pos])
        {
            heights[left]++;
            continue;
        }
        int right = pos;
        while (right < heights.size() - 1 && heights[right + 1] <= heights[right])
        {
            rights++;
        }
        if (heights[right] < heights[pos])
        {
            heights[right]++;
        }
        else
        {
            heights[pos]++;
        }
    }
    return heights;
}

int main()
{
    ios::sync_with_stdio(0);
    cin.tie(0);
    int n;
    cin >> n;
    vector<int> heights(n);
    for (int i = 0; i < n; i++)
        cin >> heights[i];
    int water, pos;
    cin >> water >> pos;
    heights = pourWater(heights, water, pos);
    for (int i = 0; i < n; i++)
        cout << heights[i] << " ";
    cout << endl;
    return 0;
}