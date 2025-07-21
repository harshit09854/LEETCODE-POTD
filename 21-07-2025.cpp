// class Solution {
// public:
//     string makeFancyString(string s) {
//         if (s.length()<=2) return s;
//         string ans = s.substr(0,2);

//         for (int i=2; i<s.length(); ++i) {
//             if (s[i] == s[i-1] && s[i-1] == s[i-2]) continue;
//             ans += s[i];
//         } 

//         return ans;
//     }
// };