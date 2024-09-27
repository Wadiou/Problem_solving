#include <iostream>
#include <vector>
using namespace std;

class Solution {
public:
    vector<int> twoSum(vector<int>& nums, int target) {
        for (size_t i = 0; i < nums.size() - 1; i++)
        {
            for (size_t j = i + 1; j < nums.size() ; j++)
            {
                if (nums[i] + nums[j] == target)
                {
                    return {static_cast<int>(i) , static_cast<int>(j)};
                }
                
            }
            
        }
        return {};
        
    }
};

int main() {
    vector<int> nums = {2, 7, 11, 15};
    int target = 9;
    
    Solution sol;  
    vector<int> result = sol.twoSum(nums, target);  
    
    cout << "Indices: ";
    for (int index : result) {
        cout << index << " ";
    }
    cout << endl;

    return 0;
}
