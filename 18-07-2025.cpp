// class Solution {
// public:
//     long long minimumDifference(vector<int>& nums) {
//         int n = nums.size() / 3;
//     int size = nums.size();
//     vector<long long> suffix(size);
    
//     // Build suffix array using minHeap (to track minimum sum of n elements from right)
//     priority_queue<int, vector<int>, greater<int>> minHeap;
//     long long sum = 0;

//     for (int i = size - 1; i >= n; --i) {
//         sum += nums[i];
//         minHeap.push(nums[i]);

//         if (minHeap.size() > n) {
//             sum -= minHeap.top();
//             minHeap.pop();
//         }

//         if (minHeap.size() == n) {
//             suffix[i] = sum;
//         } else {
//             suffix[i] = LLONG_MIN;
//         }
//     }

//     // Use maxHeap to get max sum of n elements from left
//     priority_queue<int> maxHeap;
//     sum = 0;
//     long long answer = LLONG_MAX;

//     for (int i = 0; i < 2 * n; ++i) {
//         sum += nums[i];
//         maxHeap.push(nums[i]);

//         if (maxHeap.size() > n) {
//             sum -= maxHeap.top();
//             maxHeap.pop();
//         }

//         // When both left maxHeap and right minHeap have exactly n elements
//         if (maxHeap.size() == n && suffix[i + 1] != LLONG_MIN) {
//             answer = min(answer, sum - suffix[i + 1]);
//         }
//     }

//     return answer;
//     }
// };