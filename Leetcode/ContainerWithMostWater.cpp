#include <iostream>
#include <vector>

using namespace std;

class Solution {
public:
    // O(n^2) approach (First Approach -- Failed on Time Complexity)
    /*int maxArea(vector<int>& height) {
        auto start = height.begin();
        auto end = height.end() - 1;
        int area = 0;
        int tempArea = 0;


        for (size_t i = 0; i < height.size() - 1; i++)
        {
            for (size_t i = 0; i < height.size() - 1; i++)
            {
                if (*start <= *end && start != end)
                {
                    tempArea = (*start) * (distance(start, end));
                    end--;
                }
                else if(*start > *end && start != end)
                {
                    tempArea = (*end) * (distance(start, end));
                    end--;
                }

                if (tempArea >= area)
                {
                    area = tempArea;
                }
            }
            end = height.end() - 1;
            start++;
        }
        return area;
    }*/


    // O(n) approach
    int maxArea(vector<int>& height) {
        auto start = height.begin();
        auto end = height.end() - 1;
        int area = 0;

        while (start < end)
        {
            int tempArea = 0;
            tempArea = (end - start) * min(*start, *end);
            if (tempArea >= area)
            {
                area = tempArea;
            }

            if (*start < *end)
            {
                start++;
            }
            else
            {
                end--;
            }
        }

        return area;
    }
};


int main()
{
    Solution solution;
    vector<int> arr = { 1,8,6,2,5,4,8,3,7 };
    cout << solution.maxArea(arr);
}
