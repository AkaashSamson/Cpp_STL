

#include <bits/stdc++.h>
using namespace std;

int maxFrequency(vector<int> &nums, int k)
{
    // unordered_map<int,int> map;
    int i, maxcnt = 0, cnt, j, temp;

    sort(nums.begin(), nums.end(), greater<int>());

    // cout << "nums: ";
    // for (int num : nums)
    // {
    //     cout << num << " ";
    // }
    // cout << endl;

    for (i = 0; i < nums.size(); i++)
    {
        int snum = nums[i];
        cnt = 1;
        temp = k;
        for (j = i + 1; j < nums.size(); j++)
        {
            cout << nums[j] << "v ";
            if (snum - nums[j] < temp)
            {
                temp -= (snum - nums[j]);
                cnt++;
                cout << temp << " ";
            }
            if (temp == 0)
                break;
        }
        cout << endl;

        if (cnt > maxcnt)
        {
            maxcnt = cnt;
        }
    }

    return maxcnt;
}

int main()
{
    vector<int> vec = {1, 2, 4};
    cout << maxFrequency(vec, 5);
    return 0;
}