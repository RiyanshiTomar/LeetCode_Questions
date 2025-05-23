#include <vector>
#include <algorithm>
#include <climits>
using namespace std;
class Solution {
public:
    bool containsNearbyDuplicate(vector<int>& nums, int k) {
        //int n = nums.size();
        /*int flag = 0;
        for(int i = 0; i < n; ++i){
            for(int j = i+1; j < n; ++j){
                if(nums[i] == nums[j] && abs(i-j) <= k){
                    flag = 1;
                }
            }
             
        }
        if(flag){
            return true;
        }
        return false;*/
        unordered_set<int> window;

        for (int i = 0; i < nums.size(); ++i) {
            if (window.count(nums[i])) {
                return true;
            }

            window.insert(nums[i]);

            // Slide the window to keep it of size <= k
            if (window.size() > k) {
                window.erase(nums[i - k]);
            }
        }

        return false;
    }
};