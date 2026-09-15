class Solution {
public:
    bool isValid(string s) {
        stack<char> st;
        for (char j : s) {
            if (j == '(' || j == '{' || j == '[') {
                st.push(j);

            } else {
                if (st.empty())
                    return false;
                char top = st.top();
                st.pop();

                if (j == ')' && top != '(')
                    return false;
                if (j == '}' && top != '{')
                    return false;
                if (j == ']' && top != '[')
                    return false;
            }
        }
        return st.empty();
    }
};
