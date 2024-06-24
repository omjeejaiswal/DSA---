// 20. Valid Parentheses
// Solved
// Easy
// Topics
// Companies
// Hint
// Given a string s containing just the characters '(', ')', '{', '}', '[' and ']', determine if the input string is valid.

// An input string is valid if:

// Open brackets must be closed by the same type of brackets.
// Open brackets must be closed in the correct order.
// Every close bracket has a corresponding open bracket of the same type.
 

// Example 1:

// Input: s = "()"
// Output: true
// Example 2:

// Input: s = "()[]{}"
// Output: true
// Example 3:

// Input: s = "(]"
// Output: false


class Solution {
public:
    bool isValid(string s) {
        /*
        if(s.size() == 1)
            return false;
        
        stack<char> st;
        int i = 1;

        st.push(s[0]);
        if(st.top() == ']' || st.top() == ')' || st.top() == '}'){
            return false;
        }

        while( i < s.size()) {
            if(s[i] == '{' || s[i] == '[' || s[i] == '(') {
                st.push(s[i]);
            }

            else if(!st.empty()) {
                if(s[i] == '}' && st.top() == '{') {
                    st.pop();
                }

                else if(s[i] == ')' && st.top() == '('){
                    st.pop();
                }

                else if(s[i] == ']' && st.top() == '['){
                    st.pop();
                }
                else{
                    return false;
                }
            }
            else {
                return false;
            }
            i++;
        }
        if(st.empty()) 
            return true;
        
        return false;
        */

        
    }
};