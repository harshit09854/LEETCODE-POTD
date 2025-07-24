// class Solution {
// public:
//     string removeSubString(string& s, string& matchStr) {
//         stack<char> st;

//         for (char& ch : s) {
//             if (ch == matchStr[1] && !st.empty() && st.top() == matchStr[0]) {
//                 st.pop();
//             } else {
//                 st.push(ch);
//             }
//         }

//         string temp;
//         while (!st.empty()) {
//             temp.push_back(st.top());
//             st.pop();
//         }

//         reverse(begin(temp), end(temp));
//         return temp;
//     }

//     int maximumGain(string s, int x, int y) {
//         int n = s.length();
//         int score = 0;

//         string maxString, minString;

//         if (x >= y) {
//             maxString = "ab";
//             minString = "ba";
//         } else {
//             maxString = "ba";
//             minString = "ab";
//         }

//         // first Pass
//         string first_pass = removeSubString(s, maxString);
//         int L = first_pass.length();

//         int charRemove = (n - L);
//         score += (charRemove / 2) * max(x, y);

//         // second pass
//         string second_pass = removeSubString(first_pass, minString);
//         int charRemoved = L - second_pass.length();

//         score += (charRemoved / 2) * min(x, y);

//         return score;
//     }
// };
