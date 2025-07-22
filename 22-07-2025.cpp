// class Solution {
// public:
//     int maximumUniqueSubarray(vector<int>& nums) {
//         int left=0,right=0;
//         int currSum=0;
//         int maxSum=0;
//         int n = nums.size();
//         unordered_set<int> seen;
//         while(right<n){
//             while(seen.find(nums[right])!=seen.end()){
//                 seen.erase(nums[left]);
//                 currSum -=nums[left];
//                 left++;
//             }

//             seen.insert(nums[right]);
//             currSum+= nums[right];
//             maxSum = max(maxSum,currSum);
//             right++;
            
//         }

//         return maxSum;
//     }
// };