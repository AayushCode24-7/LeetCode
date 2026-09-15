#include <iostream>
#include <string>
#include <vector>
using namespace std;

class Solution {
public:
    bool isValid(string s) {
        vector<char> st;
        
        for (char j : s) {
            if (j == '(' || j == '{' || j == '[') {
                st.push_back(j);
            } else {
                if (st.empty())
                    return false;
                
                char top = st.back();
                st.pop_back();
                
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
