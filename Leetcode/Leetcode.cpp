

#include <iostream>
#include <vector>

using namespace std;

class Solution {
    int maxNum;
public:
    int maxArea(vector<int>& height) {
        maxNum = 0;
        for (size_t i = 0; i < height.size(); i++)
        {
            if (height[i] > maxNum)
            {
                maxNum = height[i];
            }
        }
        return maxNum;
    }
};


int main()
{
    Solution solution;
    vector<int> arr = { 1,2,5,6,8,4,0 };
    cout << solution.maxArea(arr);
}
