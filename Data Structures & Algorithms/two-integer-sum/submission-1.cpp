#include <vector>
#include <unordered_map>

class Solution {
public:
    std::vector<int> twoSum(std::vector<int>& nums, int target) {
        // Map to store: number -> index
        std::unordered_map<int, int> seen;

        for (int i = 0; i < nums.size(); ++i) {
            int complement = target - nums[i];

            // Check if complement has already been seen
            if (seen.find(complement) != seen.end()) {
                return {seen[complement], i};
            }

            // Save current number with its index
            seen[nums[i]] = i;
        }

        return {}; // Fallback if no solution exists
    }
};
