#include <bits/stdc++.h>
using namespace std;

int main()
{
    ios::sync_with_stdio(0);
    cin.tie(0);
    int n;
    cin >> n;
    vector<int> nums1(n);
    vector<int> nums2(n);
    for (int i = 0; i < n; i++)
        cin >> nums1[i];
    for (int i = 0; i < n; i++)
        cin >> nums2[i];
    sort(nums1.begin(), nums1.end());
    sort(nums2.begin(), nums2.begin());
    int ans = 0;
    for (int i = 0; i < n; i++)
    {
        ans += (nums1[i] * nums2[n - i - 1]);
    }
    cout << ans << endl;
    return 0;
}